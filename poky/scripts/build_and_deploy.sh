#!/bin/bash

set -e

user="admin"
board2ip="10.228.214.52"
board3ip="10.228.214.53"
board5ip="10.228.211.196"
board6ip="10.228.213.160"
board_num=0
do_clean=0

for arg in "$@"
do
    if [[ $arg == "help" ]] || [[ $arg == "--help" ]] || [[ $arg == "-h" ]]
    then
        echo "First argument: Board no., Second argument (optional): 'clean' to build from scratch"
        echo "--help for help menu"
	exit 1
    elif [[ $arg == "clean" ]]; then
	echo "Clean slate build"
	do_clean=1
    fi

done

if [[ $1 == "2" ]]; then
	targetboard=$board2ip
	board_num=2
elif [[ $1 == "3" ]]; then
	targetboard=$board3ip
	board_num=3
elif [[ $1 == "5" ]]; then
	targetboard=$board5ip
	board_num=5
elif [[ $1 == "6" ]]; then
	targetboard=$board6ip
	board_num=6
else
	echo "Select board 2, 3, 5, or 6"
	exit 1
fi
echo "Building and deploying to board $board_num"


# Build the image
cd ~/openbmc/
source setup cnboard
if [[ do_clean ]]; then
	bitbake -c cleanall obmc-phosphor-image
else
	bitbake obmc-phosphor-image
fi
bitbake obmc-phosphor-image
cd ~/openbmc/meta-cornelis


# Bundle the image, place it in scratch dir
image_name=bmc-$(whoami)-$(date +%Y_%m_%d_%H_%m).pldm
python3 fw_tools/pldm-package/pldm_fwup_pkg_creator.py \
        /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/$image_name \
        fw_tools/pldm-package/bmc-composite.json \
        /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/image-u-boot \
        /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/image-kernel \
        /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/image-rofs

# Remove old images
IFS=
paths=($(find /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/ -name "*.pldm"))
unset IFS

for image in $paths
do
    if [[ $image != *"$image_name"* ]]; then
	    echo "removing $image"
	    rm $image
    fi
done


echo "Adding SSH key"
ssh -o StrictHostKeyChecking=no $user@$targetboard sshKey add < ~/.ssh/id_rsa.pub

echo "Flashing switch firmware"
scp /scratch/$(whoami)/openbmc/tmp/deploy/images/cnboard/$image_name $user@$targetboard:/tmp

echo "Rebooting"
ssh $user@$targetboard reboot

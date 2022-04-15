# This file is created from parsec-tool repository Cargo.lock using cargo-bitbake tool

SRC_URI += " \
    crate://crates.io/aho-corasick/0.7.15 \
    crate://crates.io/ansi_term/0.11.0 \
    crate://crates.io/ansi_term/0.12.1 \
    crate://crates.io/anyhow/1.0.44 \
    crate://crates.io/arrayvec/0.5.2 \
    crate://crates.io/atty/0.2.14 \
    crate://crates.io/autocfg/1.0.1 \
    crate://crates.io/base64/0.12.3 \
    crate://crates.io/base64/0.13.0 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bindgen/0.57.0 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitvec/0.19.5 \
    crate://crates.io/block-buffer/0.9.0 \
    crate://crates.io/bumpalo/3.7.1 \
    crate://crates.io/bytes/1.1.0 \
    crate://crates.io/cc/1.0.70 \
    crate://crates.io/cexpr/0.4.0 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/chrono/0.4.19 \
    crate://crates.io/clang-sys/1.2.2 \
    crate://crates.io/clap/2.33.3 \
    crate://crates.io/clap/3.0.0-beta.4 \
    crate://crates.io/clap_derive/3.0.0-beta.4 \
    crate://crates.io/cmake/0.1.45 \
    crate://crates.io/const-oid/0.6.2 \
    crate://crates.io/cpufeatures/0.2.1 \
    crate://crates.io/data-encoding/2.3.2 \
    crate://crates.io/der-oid-macro/0.4.0 \
    crate://crates.io/der-parser/5.1.2 \
    crate://crates.io/der/0.4.5 \
    crate://crates.io/derivative/2.2.0 \
    crate://crates.io/digest/0.9.0 \
    crate://crates.io/either/1.6.1 \
    crate://crates.io/env_logger/0.8.4 \
    crate://crates.io/form_urlencoded/1.0.1 \
    crate://crates.io/funty/1.1.0 \
    crate://crates.io/futures-channel/0.3.17 \
    crate://crates.io/futures-core/0.3.17 \
    crate://crates.io/futures-executor/0.3.17 \
    crate://crates.io/futures-io/0.3.17 \
    crate://crates.io/futures-macro/0.3.17 \
    crate://crates.io/futures-sink/0.3.17 \
    crate://crates.io/futures-task/0.3.17 \
    crate://crates.io/futures-util/0.3.17 \
    crate://crates.io/futures/0.3.17 \
    crate://crates.io/generic-array/0.14.4 \
    crate://crates.io/glob/0.3.0 \
    crate://crates.io/grpcio-sys/0.9.1+1.38.0 \
    crate://crates.io/grpcio/0.9.1 \
    crate://crates.io/hashbrown/0.11.2 \
    crate://crates.io/heck/0.3.3 \
    crate://crates.io/hermit-abi/0.1.19 \
    crate://crates.io/humantime/2.1.0 \
    crate://crates.io/idna/0.2.3 \
    crate://crates.io/indexmap/1.7.0 \
    crate://crates.io/instant/0.1.11 \
    crate://crates.io/itertools/0.10.1 \
    crate://crates.io/itoa/0.4.8 \
    crate://crates.io/js-sys/0.3.55 \
    crate://crates.io/jsonwebkey/0.3.2 \
    crate://crates.io/jsonwebtoken/7.2.0 \
    crate://crates.io/lazy_static/1.4.0 \
    crate://crates.io/lazycell/1.3.0 \
    crate://crates.io/lexical-core/0.7.6 \
    crate://crates.io/libc/0.2.103 \
    crate://crates.io/libloading/0.7.0 \
    crate://crates.io/libz-sys/1.1.3 \
    crate://crates.io/lock_api/0.4.5 \
    crate://crates.io/log/0.4.14 \
    crate://crates.io/matches/0.1.9 \
    crate://crates.io/memchr/2.3.4 \
    crate://crates.io/nom/5.1.2 \
    crate://crates.io/nom/6.2.1 \
    crate://crates.io/num-bigint/0.2.6 \
    crate://crates.io/num-bigint/0.3.3 \
    crate://crates.io/num-bigint/0.4.2 \
    crate://crates.io/num-complex/0.3.1 \
    crate://crates.io/num-derive/0.3.3 \
    crate://crates.io/num-integer/0.1.44 \
    crate://crates.io/num-iter/0.1.42 \
    crate://crates.io/num-rational/0.3.2 \
    crate://crates.io/num-traits/0.2.14 \
    crate://crates.io/num/0.3.1 \
    crate://crates.io/oid-registry/0.1.5 \
    crate://crates.io/oid/0.2.1 \
    crate://crates.io/once_cell/1.8.0 \
    crate://crates.io/opaque-debug/0.3.0 \
    crate://crates.io/os_str_bytes/3.1.0 \
    crate://crates.io/parking_lot/0.11.2 \
    crate://crates.io/parking_lot_core/0.8.5 \
    crate://crates.io/parsec-client/0.14.0 \
    crate://crates.io/parsec-interface/0.26.0 \
    crate://crates.io/peeking_take_while/0.1.2 \
    crate://crates.io/pem/0.8.3 \
    crate://crates.io/pem/1.0.1 \
    crate://crates.io/percent-encoding/2.1.0 \
    crate://crates.io/picky-asn1-der/0.2.5 \
    crate://crates.io/picky-asn1-x509/0.6.1 \
    crate://crates.io/picky-asn1/0.3.3 \
    crate://crates.io/pin-project-lite/0.2.7 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/pkcs8/0.7.6 \
    crate://crates.io/pkg-config/0.3.20 \
    crate://crates.io/proc-macro-error-attr/1.0.4 \
    crate://crates.io/proc-macro-error/1.0.4 \
    crate://crates.io/proc-macro-hack/0.5.19 \
    crate://crates.io/proc-macro-nested/0.1.7 \
    crate://crates.io/proc-macro2/1.0.29 \
    crate://crates.io/prost-derive/0.8.0 \
    crate://crates.io/prost/0.8.0 \
    crate://crates.io/protobuf/2.25.1 \
    crate://crates.io/psa-crypto-sys/0.9.2 \
    crate://crates.io/psa-crypto/0.9.1 \
    crate://crates.io/quote/1.0.9 \
    crate://crates.io/radium/0.5.3 \
    crate://crates.io/rcgen/0.8.14 \
    crate://crates.io/redox_syscall/0.2.10 \
    crate://crates.io/regex-syntax/0.6.25 \
    crate://crates.io/regex/1.4.6 \
    crate://crates.io/ring/0.16.20 \
    crate://crates.io/rustc-hash/1.1.0 \
    crate://crates.io/rusticata-macros/3.2.0 \
    crate://crates.io/rustversion/1.0.5 \
    crate://crates.io/ryu/1.0.5 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/scopeguard/1.1.0 \
    crate://crates.io/secrecy/0.7.0 \
    crate://crates.io/serde/1.0.130 \
    crate://crates.io/serde_bytes/0.11.5 \
    crate://crates.io/serde_derive/1.0.130 \
    crate://crates.io/serde_json/1.0.68 \
    crate://crates.io/sha2/0.9.9 \
    crate://crates.io/shlex/0.1.1 \
    crate://crates.io/simple_asn1/0.4.1 \
    crate://crates.io/simple_asn1/0.5.4 \
    crate://crates.io/slab/0.4.4 \
    crate://crates.io/smallvec/1.6.1 \
    crate://crates.io/spiffe/0.2.0 \
    crate://crates.io/spin/0.5.2 \
    crate://crates.io/spki/0.4.1 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/strsim/0.10.0 \
    crate://crates.io/strsim/0.8.0 \
    crate://crates.io/structopt-derive/0.4.16 \
    crate://crates.io/structopt/0.3.23 \
    crate://crates.io/syn/1.0.77 \
    crate://crates.io/synstructure/0.12.5 \
    crate://crates.io/tap/1.0.1 \
    crate://crates.io/termcolor/1.1.2 \
    crate://crates.io/textwrap/0.11.0 \
    crate://crates.io/textwrap/0.14.2 \
    crate://crates.io/thiserror-impl/1.0.29 \
    crate://crates.io/thiserror/1.0.29 \
    crate://crates.io/time/0.1.44 \
    crate://crates.io/tinyvec/1.5.0 \
    crate://crates.io/tinyvec_macros/0.1.0 \
    crate://crates.io/typenum/1.14.0 \
    crate://crates.io/unicode-bidi/0.3.6 \
    crate://crates.io/unicode-normalization/0.1.19 \
    crate://crates.io/unicode-segmentation/1.8.0 \
    crate://crates.io/unicode-width/0.1.9 \
    crate://crates.io/unicode-xid/0.2.2 \
    crate://crates.io/untrusted/0.7.1 \
    crate://crates.io/url/2.2.2 \
    crate://crates.io/users/0.10.0 \
    crate://crates.io/uuid/0.8.2 \
    crate://crates.io/vcpkg/0.2.15 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.3 \
    crate://crates.io/walkdir/2.3.2 \
    crate://crates.io/wasi/0.10.0+wasi-snapshot-preview1 \
    crate://crates.io/wasm-bindgen-backend/0.2.78 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.78 \
    crate://crates.io/wasm-bindgen-macro/0.2.78 \
    crate://crates.io/wasm-bindgen-shared/0.2.78 \
    crate://crates.io/wasm-bindgen/0.2.78 \
    crate://crates.io/web-sys/0.3.55 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.5 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/wyz/0.2.0 \
    crate://crates.io/x509-parser/0.9.2 \
    crate://crates.io/yasna/0.3.2 \
    crate://crates.io/yasna/0.4.0 \
    crate://crates.io/zeroize/1.3.0 \
    crate://crates.io/zeroize_derive/1.2.0 \
"

LIC_FILES_CHKSUM = " \
    file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
"
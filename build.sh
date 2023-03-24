#!/bin/sh

make PP="xcrun --sdk iphoneos --toolchain iphoneos clang" \
     CC="xcrun --sdk iphoneos --toolchain iphoneos clang" \
     CFLAGS="-arch arm64 -mios-version-min=12.0" \
     LFLAGS="-arch arm64 -mios-version-min=12.0 -Wl,-Bsymbolic-functions" static

libtool -static -o libhev-socks5-tunnel.a \
                   bin/libhev-socks5-tunnel.a \
                   third-part/lwip/bin/liblwip.a \
                   third-part/yaml/bin/libyaml.a \
                   third-part/hev-task-system/bin/libhev-task-system.a
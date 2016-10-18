Le Max2 Kernel Build mini-Howto
===============================

1. Build
--------

- get toolchain
    https://bitbucket.org/UBERTC/aarch64-linux-android-4.9-kernel

- Unpack kernel source
    Suppose kernel source has been unpacked to <kernel> dir.

- export env variables
    export correct "CROSS_COMPILE" to use the toolchain path you have downloaded.
    $ export CROSS_COMPILE="<android_platform_dir>/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9-kernel/bin/aarch64-linux-android-"
    $ export ARCH=arm64

- build kernel
    $ cd <kernel>
    $ make -C $PWD O=$PWD/out x2_defconfig
    $ make -j18 -C $PWD O=$PWD/out ARCH=arm64

2. Output files
---------------

- Kernel: out/arch/arm64/boot/Image

3. Clean up
-----------

$ rm -rf out

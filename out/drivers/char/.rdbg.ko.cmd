cmd_drivers/char/rdbg.ko := aarch64-linux-android-ld -EL -r  -T ../scripts/module-common.lds --build-id   --fix-cortex-a53-843419 -o drivers/char/rdbg.ko drivers/char/rdbg.o drivers/char/rdbg.mod.o

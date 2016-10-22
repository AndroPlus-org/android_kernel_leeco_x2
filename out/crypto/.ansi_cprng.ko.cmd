cmd_crypto/ansi_cprng.ko := aarch64-linux-android-ld -EL -r  -T ../scripts/module-common.lds --build-id   --fix-cortex-a53-843419 -o crypto/ansi_cprng.ko crypto/ansi_cprng.o crypto/ansi_cprng.mod.o

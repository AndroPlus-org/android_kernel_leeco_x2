cmd_firmware/letv_x5_hideep3d_auto.bin.gen.o := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -Wp,-MD,firmware/.letv_x5_hideep3d_auto.bin.gen.o.d  -nostdinc -isystem /home/androplus/aarch64-linux-android-4.9-kernel/bin/../lib/gcc/aarch64-linux-android/4.9.4/include -I../arch/arm64/include -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -Wa,-gdwarf-2   -c -o firmware/letv_x5_hideep3d_auto.bin.gen.o firmware/letv_x5_hideep3d_auto.bin.gen.S

source_firmware/letv_x5_hideep3d_auto.bin.gen.o := firmware/letv_x5_hideep3d_auto.bin.gen.S

deps_firmware/letv_x5_hideep3d_auto.bin.gen.o := \

firmware/letv_x5_hideep3d_auto.bin.gen.o: $(deps_firmware/letv_x5_hideep3d_auto.bin.gen.o)

$(deps_firmware/letv_x5_hideep3d_auto.bin.gen.o):

cmd_firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -Wp,-MD,firmware/.Letv_max1_tk_58_0A_1.3_0A.fw.gen.o.d  -nostdinc -isystem /home/androplus/aarch64-linux-android-4.9-kernel/bin/../lib/gcc/aarch64-linux-android/4.9.4/include -I../arch/arm64/include -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -Wa,-gdwarf-2   -c -o firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.S

source_firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o := firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.S

deps_firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o := \

firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o: $(deps_firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o)

$(deps_firmware/Letv_max1_tk_58_0A_1.3_0A.fw.gen.o):

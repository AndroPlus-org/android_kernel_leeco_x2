cmd_firmware/mXT640T_V16AA.fw.gen.o := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -Wp,-MD,firmware/.mXT640T_V16AA.fw.gen.o.d  -nostdinc -isystem /home/androplus/aarch64-linux-android-4.9-kernel/bin/../lib/gcc/aarch64-linux-android/4.9.4/include -I../arch/arm64/include -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -Wa,-gdwarf-2   -c -o firmware/mXT640T_V16AA.fw.gen.o firmware/mXT640T_V16AA.fw.gen.S

source_firmware/mXT640T_V16AA.fw.gen.o := firmware/mXT640T_V16AA.fw.gen.S

deps_firmware/mXT640T_V16AA.fw.gen.o := \

firmware/mXT640T_V16AA.fw.gen.o: $(deps_firmware/mXT640T_V16AA.fw.gen.o)

$(deps_firmware/mXT640T_V16AA.fw.gen.o):

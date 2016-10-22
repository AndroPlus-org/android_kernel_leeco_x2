cmd_firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -Wp,-MD,firmware/synaptics/.startup_fw_update_X2-03-02.img.gen.o.d  -nostdinc -isystem /home/androplus/aarch64-linux-android-4.9-kernel/bin/../lib/gcc/aarch64-linux-android/4.9.4/include -I../arch/arm64/include -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -Wa,-gdwarf-2   -c -o firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o firmware/synaptics/startup_fw_update_X2-03-02.img.gen.S

source_firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o := firmware/synaptics/startup_fw_update_X2-03-02.img.gen.S

deps_firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o := \

firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o: $(deps_firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o)

$(deps_firmware/synaptics/startup_fw_update_X2-03-02.img.gen.o):

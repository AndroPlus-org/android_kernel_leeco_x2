cmd_drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -Wp,-MD,drivers/video/fbdev/msm/../../msm/mdss/sii6400/.struct_bitfield.o.d  -nostdinc -isystem /home/androplus/aarch64-linux-android-4.9-kernel/bin/../lib/gcc/aarch64-linux-android/4.9.4/include -I../arch/arm64/include -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h  -I../drivers/video/fbdev/msm/../../msm/mdss/sii6400 -Idrivers/video/fbdev/msm/../../msm/mdss/sii6400 -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -mgeneral-regs-only -fno-pic -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO -Wall -DDEBUG -D__CHECK_ENDIAN__ -O2 -Werror -DSII6400_COMBINED_FIRMWARE -DSII6400_DRIVER_VERSION=\""4.1.0.Unversioned directory"\" -DSII6400_CONFIGDATA_FILE=\"/persist/sii6400.dat\" -DCONFIG_LIMIT_ON_HDMI -DENABLE_MHL_UEVENT -DOLD_KEYMAP_TABLE    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(struct_bitfield)"  -D"KBUILD_MODNAME=KBUILD_STR(sii6400drv)" -c -o drivers/video/fbdev/msm/../../msm/mdss/sii6400/.tmp_struct_bitfield.o ../drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.c

source_drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o := ../drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.c

deps_drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o := \
  ../drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.h \
  ../include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
    $(wildcard include/config/generic/atomic64.h) \
  ../include/uapi/linux/types.h \
  arch/arm64/include/generated/asm/types.h \
  ../include/uapi/asm-generic/types.h \
  ../include/asm-generic/int-ll64.h \
  ../include/uapi/asm-generic/int-ll64.h \
  ../arch/arm64/include/uapi/asm/bitsperlong.h \
  ../include/asm-generic/bitsperlong.h \
  ../include/uapi/asm-generic/bitsperlong.h \
  ../include/uapi/linux/posix_types.h \
  ../include/linux/stddef.h \
  ../include/uapi/linux/stddef.h \
  ../include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  ../include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  ../arch/arm64/include/uapi/asm/posix_types.h \
  ../include/uapi/asm-generic/posix_types.h \

drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o: $(deps_drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o)

$(deps_drivers/video/fbdev/msm/../../msm/mdss/sii6400/struct_bitfield.o):

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfe92a0ed, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7671052e, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xebd447d5, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xfdef9079, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x791ac2e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x3ed492eb, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0xddf06d14, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0xcd852e34, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xc3030bf4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcb1d0bf3, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xf0b3ee9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x4317e913, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd47f71c2, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x6d4cc1ca, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x86eb062b, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7b15a377, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0xebce51ac, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x10c28139, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x20056a3c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xab8f16aa, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
MODULE_ALIAS("of:N*T*Cqcom,spi-msm-codec-slave*");

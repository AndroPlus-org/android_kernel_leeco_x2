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
	{ 0x2232120e, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0xaea49370, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x17cd648e, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x9f38c8df, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x82dcdbc9, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x41c0977d, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

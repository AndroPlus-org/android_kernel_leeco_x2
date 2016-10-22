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
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x80d68d3e, __VMLINUX_SYMBOL_STR(fb_register_client) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x10c28139, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x62378ef1, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x4317e913, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xab8f16aa, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6e3eddc4, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0xa6829eb9, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xd47f71c2, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x747592c5, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfdef9079, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb12cbacb, __VMLINUX_SYMBOL_STR(fb_unregister_client) },
	{ 0xebd447d5, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x13a000, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xc3030bf4, __VMLINUX_SYMBOL_STR(__class_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


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
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x677fcadf, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xfdef9079, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x20056a3c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xf0b3ee9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc3030bf4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5b9957a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x42858fe0, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4317e913, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xabf42529, __VMLINUX_SYMBOL_STR(smem_find) },
	{ 0x89ac4a74, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x11a63aa1, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x609e11ec, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xbe5c9f79, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x21e2f938, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc502465f, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x1da311c, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x10c28139, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab8f16aa, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x63e315e4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


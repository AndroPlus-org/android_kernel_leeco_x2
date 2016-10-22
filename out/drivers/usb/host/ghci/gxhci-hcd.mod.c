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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7671052e, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xfdef9079, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf0b3ee9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc3030bf4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5b9957a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x42858fe0, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf5594c24, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xcedcdbca, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xfecee964, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xaf8f4573, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x6cc17050, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xc5139d12, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb90e048a, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xef57b4e3, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20056a3c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xebce51ac, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xd6a9a7b5, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xa9cb69a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x677fcadf, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x32c011fc, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe67ff2ae, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1d478692, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49df7229, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x587135ce, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x63e315e4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x409a9f3b, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xca08f30f, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x716ece24, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4F759ADA571C6A8F3E52400");

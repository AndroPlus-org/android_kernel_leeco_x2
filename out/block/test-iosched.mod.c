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
	{ 0x35c7e5ab, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x6e63b14e, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x7b5a334c, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xdf01b92a, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xccfb744f, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xc310b981, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0x10c28139, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c35f836, __VMLINUX_SYMBOL_STR(blk_run_queue) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xe9db2803, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xed0b1e8c, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x2f17bbc9, __VMLINUX_SYMBOL_STR(init_request_from_bio) },
	{ 0x3ed03868, __VMLINUX_SYMBOL_STR(elevator_alloc) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6dd5aa74, __VMLINUX_SYMBOL_STR(elv_unregister) },
	{ 0xaef01cae, __VMLINUX_SYMBOL_STR(elv_dispatch_sort) },
	{ 0xab8f16aa, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8dc6897a, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xed663526, __VMLINUX_SYMBOL_STR(elv_register) },
	{ 0xe0df7500, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x52e5c849, __VMLINUX_SYMBOL_STR(blk_get_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


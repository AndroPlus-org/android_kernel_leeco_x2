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
	{ 0xa41a8e1c, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
	{ 0xc163592a, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0xb9002ab7, __VMLINUX_SYMBOL_STR(test_iosched_set_ignore_round) },
	{ 0xbdebcb09, __VMLINUX_SYMBOL_STR(mmc_blk_get_packed_statistics) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xae3d5fa6, __VMLINUX_SYMBOL_STR(test_iosched_add_unique_test_req) },
	{ 0xffadc0a8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xed0b1e8c, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb77b311a, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xc58b4393, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0x5efd88dd, __VMLINUX_SYMBOL_STR(test_iosched_create_test_req) },
	{ 0xb46ae6b3, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7b4db101, __VMLINUX_SYMBOL_STR(test_iosched_free_test_req_data_buffer) },
	{ 0xbe306f1a, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x71a54475, __VMLINUX_SYMBOL_STR(test_iosched_set_test_result) },
	{ 0x5b69bd15, __VMLINUX_SYMBOL_STR(__blk_run_queue) },
	{ 0x9e4bc16d, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0x1697ac92, __VMLINUX_SYMBOL_STR(mmc_blk_init_packed_statistics) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa2ca7d11, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";


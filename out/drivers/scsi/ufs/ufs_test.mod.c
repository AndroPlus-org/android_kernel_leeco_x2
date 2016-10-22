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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe2c51f96, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb46ae6b3, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x10215ef6, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x529ecee0, __VMLINUX_SYMBOL_STR(compare_buffer_to_pattern) },
	{ 0xefe97ce5, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9e4bc16d, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0x4c73041f, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xffadc0a8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xc163592a, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0xe9db2803, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x552fa5eb, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x24f10171, __VMLINUX_SYMBOL_STR(blk_post_runtime_resume) },
	{ 0xe5400174, __VMLINUX_SYMBOL_STR(ufshcd_query_attr) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xed0b1e8c, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x10f1064d, __VMLINUX_SYMBOL_STR(kstrtoint_from_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6980857f, __VMLINUX_SYMBOL_STR(scsi_gendisk_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0x53ffe808, __VMLINUX_SYMBOL_STR(ufshcd_query_flag) },
	{ 0xbe306f1a, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xa2ca7d11, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x63a36f70, __VMLINUX_SYMBOL_STR(ufshcd_query_descriptor) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc98e2f2b, __VMLINUX_SYMBOL_STR(scsi_gendisk_get_from_dev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7b4db101, __VMLINUX_SYMBOL_STR(test_iosched_free_test_req_data_buffer) },
	{ 0xc58b4393, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0xa41a8e1c, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";


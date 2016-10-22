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
	{ 0x6d1979c6, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x552fa5eb, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xb71a2490, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x34004ae6, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0xd5f59b67, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xfb949aa2, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe079e5c7, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xc56df839, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc5ce8981, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x510b2822, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x35bc9662, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x1dec96cc, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xfc3b8bb7, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x765132ec, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xe861c05c, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x434ac367, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xa9cb69a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x63e315e4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xffadc0a8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xbbf55c3f, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00c244c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3f06aab9, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7d88731e, __VMLINUX_SYMBOL_STR(kstrtol_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb197dc6d, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0x3b43b2a2, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0x384f4e5e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x10215ef6, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb77b311a, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x10c28139, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xab8f16aa, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


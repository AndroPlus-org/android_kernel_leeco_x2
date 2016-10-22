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
	{ 0x9058c24, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9365c5b5, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x5f2c9421, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x186e2f05, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0x6e7e7b51, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xe3fe662c, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xb8a8f8d3, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xcc490f7e, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb8a1c718, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xe5fa578c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xea8eef5, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xce78d30f, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x76cea9a0, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x271d88a9, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x4e9dffb5, __VMLINUX_SYMBOL_STR(ip_fast_csum) },
	{ 0x401bc0cb, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6f93b63f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd5d01e58, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x4c3e222a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf54487e, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x88ba8772, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x3d952d23, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1dd7abfc, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xdd653daa, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x726406ca, "bus_register" },
	{ 0x2d6507b5, "_find_next_zero_bit_le" },
	{ 0x2d91870, "simple_pin_fs" },
	{ 0x531380ff, "device_remove_file" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x7e8191b8, "device_remove_bin_file" },
	{ 0x64e78e65, "cdev_del" },
	{ 0x257f448e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7666bb90, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x632ca2ef, "put_pid" },
	{ 0x55c371f2, "driver_register" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xab455eb0, "up_read" },
	{ 0xa34bab6f, "dma_unmap_sg" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x97255bdf, "strlen" },
	{ 0x279e05ec, "device_release_driver" },
	{ 0xcccca482, "_test_and_clear_bit_le" },
	{ 0x1749f819, "dev_set_drvdata" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbd7d6fba, "simple_release_fs" },
	{ 0x67053080, "current_kernel_time" },
	{ 0x33b9500a, "dma_map_sg" },
	{ 0xd25140c9, "dev_printk" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x4221d68f, "pci_disable_device" },
	{ 0xcae232b, "utf16s_to_utf8s" },
	{ 0x8949858b, "schedule_work" },
	{ 0x2f241182, "generic_delete_inode" },
	{ 0xe22ca8b7, "dput" },
	{ 0x170ec140, "seq_printf" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xb5298c76, "remove_proc_entry" },
	{ 0x319206f7, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x357ae11e, "__register_chrdev" },
	{ 0xd5152710, "sg_next" },
	{ 0x677bb305, "param_ops_bool" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xc3bbd42e, "cancel_delayed_work_sync" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x7483ecd9, "blocking_notifier_chain_unregister" },
	{ 0x2c7e7b70, "dma_pool_destroy" },
	{ 0x208a2581, "bcm947xx_sih" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xb91531c6, "sysfs_remove_group" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbf1faebe, "mutex_trylock" },
	{ 0xc6d533e1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda1a7335, "kasprintf" },
	{ 0x8595e7c8, "d_delete" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0x28a915ac, "pci_set_master" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xbb2286cb, "get_sb_single" },
	{ 0x5f754e5a, "memset" },
	{ 0x59d8223a, "ioport_resource" },
	{ 0x9aa66607, "device_bind_driver" },
	{ 0xa06d909b, "proc_mkdir" },
	{ 0xcbc074f7, "kill_litter_super" },
	{ 0xd69998, "device_del" },
	{ 0x340e8cde, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb36a11e3, "dev_err" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x62280118, "ddr_phys_offset2_va" },
	{ 0x50214611, "kthread_stop" },
	{ 0x53456007, "sysfs_create_group" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x71c90087, "memcmp" },
	{ 0x6004323c, "d_alloc_root" },
	{ 0xbbde77d9, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0x4867101f, "dma_free_coherent" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xd482c208, "mem_section" },
	{ 0x315818ab, "coherence_flag" },
	{ 0xc23950bd, "dentry_unhash" },
	{ 0xb2cce056, "device_attach" },
	{ 0xfbc4fc0f, "put_driver" },
	{ 0x61933215, "device_create" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xd2267400, "init_uts_ns" },
	{ 0xe82a41dd, "dma_pool_free" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x4e3567f7, "match_int" },
	{ 0xf0fc90e0, "device_add" },
	{ 0x46621812, "bus_find_device" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xadb3d81e, "up_write" },
	{ 0xb1b22911, "down_write" },
	{ 0x8edcb34f, "bus_unregister" },
	{ 0x41421523, "kill_pid_info_as_uid" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x891d2598, "dma_alloc_coherent" },
	{ 0x68faad7a, "device_create_file" },
	{ 0xb45efe82, "cdev_add" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x608cd2f8, "module_put" },
	{ 0xfe107b, "ddr_phys_offset_va" },
	{ 0xfd61c9ad, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0xd9365f87, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb3de1818, "bus_register_notifier" },
	{ 0x159ef61c, "driver_create_file" },
	{ 0xc295cb0e, "simple_dir_operations" },
	{ 0x49c60e0b, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7a1ce4a9, "___dma_page_cpu_to_dev" },
	{ 0x78c5a0f7, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x2ec08fee, "___dma_page_dev_to_cpu" },
	{ 0xc27487dd, "__bug" },
	{ 0x3eb7e410, "dma_pool_alloc" },
	{ 0x70d7f138, "wake_up_process" },
	{ 0x79694551, "device_create_bin_file" },
	{ 0x336e065e, "blocking_notifier_chain_register" },
	{ 0x9bce482f, "__release_region" },
	{ 0x88a2c58a, "get_device" },
	{ 0xcb988212, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x266db718, "get_driver" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x5f7eaba0, "iput" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xc169f4e1, "kthread_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9775cdc, "kref_get" },
	{ 0x7a4bfa96, "device_initialize" },
	{ 0x90742c5e, "pci_dev_run_wake" },
	{ 0xe8ebf1c5, "class_destroy" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xb9896dca, "simple_statfs" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xd2d0d395, "dev_warn" },
	{ 0xf0ca8578, "device_unregister" },
	{ 0xb5c90608, "driver_attach" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xad5fc4c2, "unregister_filesystem" },
	{ 0x5b981e3d, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x766cffaf, "driver_remove_file" },
	{ 0x60f71cfa, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc203b26e, "new_inode" },
	{ 0x718c7b54, "lookup_one_len" },
	{ 0x29bdc81f, "dev_set_name" },
	{ 0xe246fd0, "pci_enable_device" },
	{ 0x5ddcd981, "simple_dir_inode_operations" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0xe678a2ec, "bus_unregister_notifier" },
	{ 0x1f0cf4c1, "dma_pool_create" },
	{ 0xfebf995, "outer_cache" },
	{ 0xb1a8ec6e, "__class_create" },
	{ 0xf17f160e, "dev_get_drvdata" },
	{ 0x2118bb51, "d_instantiate" },
	{ 0x760a0f4f, "yield" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb9eb3aa9, "add_uevent_var" },
	{ 0x313341a3, "_set_bit_le" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc09dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic09isc*ip*");

MODULE_INFO(srcversion, "8EA28C3125A34BB63025493");

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
	{ 0x859f2e33, "blk_init_queue" },
	{ 0xf3a0076f, "class_find_device" },
	{ 0x9b8503d3, "kmem_cache_destroy" },
	{ 0x726406ca, "bus_register" },
	{ 0x6f1c1206, "module_refcount" },
	{ 0x257f448e, "kmalloc_caches" },
	{ 0xf82f16b3, "execute_in_process_context" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1003cb86, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55c371f2, "driver_register" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xf0392ce1, "blk_cleanup_queue" },
	{ 0x34c762bd, "blk_queue_prep_rq" },
	{ 0xa34bab6f, "dma_unmap_sg" },
	{ 0x14373b93, "register_sysctl_table" },
	{ 0xfee59c3, "single_open" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb603525d, "blk_queue_max_hw_sectors" },
	{ 0x2274fe5, "__alloc_workqueue_key" },
	{ 0xa4c9bee5, "blk_plug_device" },
	{ 0xe81f6450, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd25140c9, "dev_printk" },
	{ 0x33b9500a, "dma_map_sg" },
	{ 0x1f0761c3, "single_release" },
	{ 0x7db57751, "proc_dointvec" },
	{ 0x81003ee2, "__sg_alloc_table" },
	{ 0x377ee0d1, "blk_put_request" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe512baee, "blk_dump_rq_flags" },
	{ 0x8949858b, "schedule_work" },
	{ 0x170ec140, "seq_printf" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xb5298c76, "remove_proc_entry" },
	{ 0x8bc4fd99, "transport_destroy_device" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x815131ba, "mempool_destroy" },
	{ 0x802be255, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xd5152710, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6fef8abe, "blk_free_tags" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe9cc7cc1, "blk_run_queue" },
	{ 0x444d5006, "blk_start_queue" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xeb8853ee, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4fcbd2cd, "__blk_run_queue" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbb36da73, "blk_queue_max_segments" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa06d909b, "proc_mkdir" },
	{ 0xd69998, "device_del" },
	{ 0xb36a11e3, "dev_err" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf5332481, "transport_add_device" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x62280118, "ddr_phys_offset2_va" },
	{ 0x50214611, "kthread_stop" },
	{ 0xef0bd417, "class_interface_register" },
	{ 0x71c90087, "memcmp" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x23269a13, "strict_strtoul" },
	{ 0xfa6d08e7, "class_unregister" },
	{ 0x8615a666, "transport_configure_device" },
	{ 0x1bad8c8, "blk_peek_request" },
	{ 0x6d97b94f, "blk_queue_segment_boundary" },
	{ 0x9cae9b08, "blk_queue_resize_tags" },
	{ 0x328a05f1, "strncpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0x63db125c, "kmem_cache_free" },
	{ 0x9ae15d91, "blk_queue_start_tag" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xd482c208, "mem_section" },
	{ 0x315818ab, "coherence_flag" },
	{ 0x85740c04, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x508b50f1, "blk_execute_rq_nowait" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xf0fc90e0, "device_add" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x86d3a934, "__class_register" },
	{ 0x8edcb34f, "bus_unregister" },
	{ 0xc3b16eb1, "flush_workqueue" },
	{ 0xc25b8536, "kobject_uevent_env" },
	{ 0x68faad7a, "device_create_file" },
	{ 0xdac23731, "blk_unprep_request" },
	{ 0x608cd2f8, "module_put" },
	{ 0x3ce7ff00, "blk_queue_bounce_limit" },
	{ 0x7dceceac, "capable" },
	{ 0x5b54b457, "blk_rq_map_kern" },
	{ 0xfe107b, "ddr_phys_offset_va" },
	{ 0x20a36bb1, "bus_for_each_dev" },
	{ 0xd9365f87, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x1cd0f6c0, "mempool_alloc" },
	{ 0xaf8d302, "__blk_put_request" },
	{ 0x49c60e0b, "put_device" },
	{ 0xa7ec4419, "blk_queue_softirq_done" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x5ef99db4, "unregister_sysctl_table" },
	{ 0x9b0a3d5d, "blk_execute_rq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x2b90cdaa, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65c84b10, "transport_setup_device" },
	{ 0x30d61ff5, "blk_end_request" },
	{ 0xc27487dd, "__bug" },
	{ 0xcffb6db, "create_proc_entry" },
	{ 0xd61c4af6, "blk_rq_init" },
	{ 0xaef766ec, "blk_rq_map_sg" },
	{ 0x70d7f138, "wake_up_process" },
	{ 0x1ee9a6f1, "platform_bus" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x920664c8, "mempool_free" },
	{ 0x88a2c58a, "get_device" },
	{ 0xa3c8af26, "kmem_cache_create" },
	{ 0xdb2178c7, "__sg_free_table" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xdd44c86f, "blk_stop_queue" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x8ceea345, "device_for_each_child" },
	{ 0x312a94c3, "proc_create_data" },
	{ 0x50e36691, "seq_lseek" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xc169f4e1, "kthread_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x93b80f4, "blk_queue_dma_alignment" },
	{ 0xf11fba13, "blk_end_request_all" },
	{ 0x7a4bfa96, "device_initialize" },
	{ 0x3cfcb8a9, "blk_requeue_request" },
	{ 0x85517a05, "blk_complete_request" },
	{ 0x1da6a30, "sg_scsi_ioctl" },
	{ 0xb5c12b01, "put_page" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xf0ca8578, "device_unregister" },
	{ 0x555904e3, "transport_remove_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0xf4e9416d, "blk_queue_lld_busy" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8a36c336, "blk_queue_max_segment_size" },
	{ 0xfc5a65e3, "seq_release" },
	{ 0x29bdc81f, "dev_set_name" },
	{ 0x5760ad33, "device_schedule_callback_owner" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0x13095525, "param_ops_uint" },
	{ 0xa711d02e, "blk_get_request" },
	{ 0x2ca5dc1e, "read_dev_sector" },
	{ 0x726ea3c3, "blk_start_request" },
	{ 0x1b9a5cb2, "blk_end_request_err" },
	{ 0x142ab5c0, "blk_queue_rq_timed_out" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0FD81EAB12FB4B45BF14E7B");

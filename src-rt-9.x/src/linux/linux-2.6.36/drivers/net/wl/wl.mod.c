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
	{ 0x1616af50, "si_set_sromctl" },
	{ 0x2552ffca, "si_core_sflags" },
	{ 0x1933ed, "pktq_penq" },
	{ 0x6dbe3f7c, "si_pci_war16165" },
	{ 0xe914e41e, "strcpy" },
	{ 0xce4ed7d4, "si_watchdog" },
	{ 0x25929294, "si_deregister_intr_callback" },
	{ 0xf25216f3, "si_pmu_set_ldo_voltage" },
	{ 0xcadf25eb, "si_pci_fixcfg" },
	{ 0x7ed71894, "bcm_ether_atoe" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xed232f6f, "si_ccreg" },
	{ 0x5c20b2f6, "osl_pkt_frmnative" },
	{ 0xefd9ec6c, "pktq_prepend" },
	{ 0x53c5ebdc, "pci_unregister_driver" },
	{ 0xd890cdae, "si_lowpwr_opt" },
	{ 0x1e33e00, "getintvar" },
	{ 0xdd98c462, "si_pmu_res_init" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd955888, "register_netdev" },
	{ 0xd1c026c, "si_pcieclkreq" },
	{ 0xdce8ecb, "si_coreunit" },
	{ 0xa7920694, "osl_dma_map" },
	{ 0x58adcdb8, "osl_malloced" },
	{ 0xa16396b8, "igsc_sdb_interface_del" },
	{ 0xfb5f4ca1, "osl_pktfree" },
	{ 0x18143232, "pktq_deq" },
	{ 0x6dbcafc9, "ctf_attach_fn" },
	{ 0x905d9688, "si_pmu_chip_init" },
	{ 0x878d3bd0, "unregister_netdev" },
	{ 0x944c6436, "si_gci_chipcontrol" },
	{ 0x955ac84, "otp_read_word" },
	{ 0xb8bbe604, "pktsegcnt" },
	{ 0x428c6304, "si_core_cflags" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd1e7bed9, "emfc_exit" },
	{ 0xdd2e43f3, "bcm_format_flags" },
	{ 0x78c1ab7, "bcm_bprintf" },
	{ 0x22451d08, "si_core_reset" },
	{ 0xfad3124e, "si_gpiopull" },
	{ 0x23dadd04, "pktsegcnt_war" },
	{ 0x1659c56b, "si_alp_clock" },
	{ 0x66f3993b, "si_watchdog_ms" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x7a9fb787, "si_clkctl_cc" },
	{ 0xc5561774, "__netif_schedule" },
	{ 0x47a3b2dc, "bcm_atoi" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x79cf7ea9, "hndcrc32" },
	{ 0x9b121934, "si_register_intr_callback" },
	{ 0xb3efc72d, "down" },
	{ 0xfebf995, "outer_cache" },
	{ 0x670c6dc8, "osl_pci_write_config" },
	{ 0x5968cdf3, "si_gpioin" },
	{ 0x1e873529, "si_pmu_gband_spurwar" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xa9bef758, "si_switch_core" },
	{ 0x6122140e, "si_pcie_hw_LTR_war" },
	{ 0xb3e6be7f, "si_pll_sr_reinit" },
	{ 0x4feaf241, "bcm_uint64_divide" },
	{ 0x6de232d, "si_chipcontrl_epa4331" },
	{ 0x523e60cf, "si_btcombo_p250_4313_war" },
	{ 0x264e8f33, "si_gpioout" },
	{ 0xc777ca5a, "si_setcore" },
	{ 0x2e21f417, "alloc_netdev_mq" },
	{ 0xbec57630, "si_is_sprom_enabled" },
	{ 0x8a90c79b, "emfc_input" },
	{ 0x356ba613, "pktsetprio" },
	{ 0xdbf6cc5b, "bcm_find_vendor_ie" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb85ff2a8, "osl_mfree" },
	{ 0xd8f795ca, "del_timer" },
	{ 0xf17f160e, "dev_get_drvdata" },
	{ 0x948cde9, "num_physpages" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x71c90087, "memcmp" },
	{ 0xb4bb547d, "si_pcmcia_init" },
	{ 0xcf89eab7, "si_corereg" },
	{ 0xd2d2fd1f, "si_pcie_power_save_enable" },
	{ 0x190879d3, "si_get_sromctl" },
	{ 0x7002806a, "si_pmu_rfldo" },
	{ 0x3362a1b4, "bcm_ip_ntoa" },
	{ 0x30c5796e, "si_sprom_enable" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x14540e95, "si_setcoreidx" },
	{ 0x6c4a4788, "si_numd11coreunits" },
	{ 0x145031d, "emfc_cfg_request_process" },
	{ 0x1749f819, "dev_set_drvdata" },
	{ 0x621f91fc, "si_gpioled" },
	{ 0x6f617889, "dma_attach" },
	{ 0x279e5513, "osl_pcie_rreg" },
	{ 0x5f754e5a, "memset" },
	{ 0xebf92b18, "igsc_interface_rtport_del" },
	{ 0x6ecf6626, "getintvararray" },
	{ 0x2c6e6541, "bcm_write_tlv_safe" },
	{ 0x6e5abce2, "netif_rx" },
	{ 0x1000e51, "schedule" },
	{ 0xb7bc6a2, "si_pmu_switch_off_PARLDO" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x2ccb554a, "srom_read" },
	{ 0x3ca6f08e, "si_chipcontrl_btshd0_4331" },
	{ 0xe2e6b6b8, "si_mac_clk" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x532350a5, "si_btc_enable_chipcontrol" },
	{ 0x9e5f1946, "pktq_pflush" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x328a05f1, "strncpy" },
	{ 0x65379a26, "si_pciedev_crwlpciegen2" },
	{ 0x58c774ac, "osl_malloc" },
	{ 0xb286275e, "si_clk_pmu_htavail_set" },
	{ 0xfbf2a69b, "bcm_iovar_lencheck" },
	{ 0xa0dea30c, "do_4360_pcie2_war" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x65380442, "si_clock" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x8cf51d15, "up" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0xb7598b33, "si_chipcontrl_srom4360" },
	{ 0xcccf00c2, "si_pcie_set_ctrlreg" },
	{ 0x73702218, "bcm_parse_tlvs" },
	{ 0x6d82ae67, "pktq_pdeq_tail" },
	{ 0x27e5ace3, "g_assert_type" },
	{ 0x4f0582ec, "si_pci_up" },
	{ 0x9c50c9a7, "si_corerev" },
	{ 0x53740ab9, "pktq_flush" },
	{ 0xd1d8ba49, "dma_txrewind" },
	{ 0xa731380d, "si_update_masks" },
	{ 0xb5001084, "si_fabid" },
	{ 0x9915808, "printbig" },
	{ 0xd2166dfc, "prhex" },
	{ 0xb18268bb, "si_is_sprom_available" },
	{ 0x70d0f0c6, "osl_pktget" },
	{ 0x630f20ce, "si_seci_init" },
	{ 0x7600522c, "osl_mallocz" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xa7203e01, "pktcopy" },
	{ 0x1726a988, "si_pcielcreg" },
	{ 0xc00d78ff, "bcm_ctype" },
	{ 0x208b44ad, "pktgetdscp" },
	{ 0x6188367e, "valid_bcmerror" },
	{ 0x3d805c14, "si_d11_switch_addrbase" },
	{ 0xcb2b9016, "pktq_penq_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfe7e62ef, "si_pmu_regcontrol" },
	{ 0x8b524b26, "bcm_copy_tlv_safe" },
	{ 0x5218bcaa, "si_gci_set_functionsel" },
	{ 0x99bb8806, "memmove" },
	{ 0xc7b7502c, "si_iscoreup" },
	{ 0xd7b2aaca, "si_clkctl_init" },
	{ 0x304621fb, "si_pcieserdesreg" },
	{ 0x824bbc8f, "si_attach" },
	{ 0x4d30408c, "getintvararraysize" },
	{ 0x2ea617e9, "si_pmu_chipcontrol" },
	{ 0x1eda5758, "osl_detach" },
	{ 0xdc6a3522, "skb_put" },
	{ 0x5535cd32, "si_pmu_synth_pwrsw_4313_war" },
	{ 0xd8526e39, "si_pmu_pllcontrol" },
	{ 0x4715a379, "si_ldo_war" },
	{ 0xc2d0a3df, "pktq_init" },
	{ 0x43d4e388, "osl_pkt_tonative" },
	{ 0x5793d43c, "si_btcombo_43228_war" },
	{ 0x8a41f6f1, "si_epa_4313war" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdef50a50, "osl_ctfpool_cleanup" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x551bbbe7, "si_config_53573_d11_oob" },
	{ 0x98eb4a41, "bcm_ether_ntoa" },
	{ 0x4de4e1be, "si_core_disable" },
	{ 0xd281f098, "si_pcie_war_ovr_update" },
	{ 0x281ab138, "bcmstrcat" },
	{ 0x7d11c268, "jiffies" },
	{ 0x20dd3e82, "osl_check_memleak" },
	{ 0xb95779a4, "pktq_peek_tail" },
	{ 0x48d7491f, "si_pcie_set_request_size" },
	{ 0x82a26589, "osl_ctfpool_replenish" },
	{ 0x1e004dc8, "si_gpiocontrol" },
	{ 0x89480c9d, "osl_delay" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x28a915ac, "pci_set_master" },
	{ 0xe246fd0, "pci_enable_device" },
	{ 0x774f67e2, "pktq_set_max_plen" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x23a7dffe, "si_clkctl_fast_pwrup_delay" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x4d0521c4, "si_osh" },
	{ 0x97255bdf, "strlen" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x1a3a1d3c, "free_netdev" },
	{ 0xb037c655, "si_chipid" },
	{ 0xa6c9a635, "si_pcie_ltr_war" },
	{ 0x8e062ab5, "igsc_exit" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0x1ec12ca0, "bcm_binit" },
	{ 0xea364e7, "skb_push" },
	{ 0xe746a39, "si_pciedev_reg_pm_clk_period" },
	{ 0x8468a9c1, "osl_attach" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb5298c76, "remove_proc_entry" },
	{ 0x9bd92dab, "igsc_init" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x1a2f395c, "osl_pktdup" },
	{ 0x47625f44, "emfc_init" },
	{ 0x5c465637, "__pci_register_driver" },
	{ 0x80e0912, "bcm_next_tlv" },
	{ 0x9833b9fa, "bcm_strtoul" },
	{ 0x7dceceac, "capable" },
	{ 0x9dd9d2a7, "getvar" },
	{ 0x32ded1fe, "si_pmu_spuravoid" },
	{ 0xc7c65063, "bcm_uint64_multiple_add" },
	{  0x878a7, "si_pcie_set_maxpayload_size" },
	{ 0xe9aefa6b, "osl_ctfpool_add" },
	{ 0xf264e359, "si_gpiotimerval" },
	{ 0x380b9144, "bcm_brev_str" },
	{ 0x17878114, "si_pmu_switch_on_PARLDO" },
	{ 0xe97f1f5c, "si_core_cflags_wo" },
	{ 0xb4f0bb69, "pktq_pdeq" },
	{ 0x5a3b6e40, "si_pci_setup" },
	{ 0x2c80e85a, "pktq_mdeq" },
	{ 0xc73b3d89, "pktq_append" },
	{ 0xe6369cab, "si_pcieltrenable" },
	{ 0x98cb3191, "osl_rand" },
	{ 0xe3f89967, "flush_delayed_work" },
	{ 0x8fc3350, "si_read_pmu_autopll" },
	{ 0x4479e584, "ether_setup" },
	{ 0x7a991116, "si_restore_core" },
	{ 0x7ef4e6fa, "si_gpioouten" },
	{ 0x48c9de11, "bcm_bitcount" },
	{ 0x8cfc414e, "add_timer" },
	{ 0x1fdc13d2, "pkttotlen" },
	{ 0xcffb6db, "create_proc_entry" },
	{ 0xb28e6b8a, "si_pcieobffenable" },
	{ 0x4221d68f, "pci_disable_device" },
	{ 0xa3a89fbb, "si_pci_sleep" },
	{ 0x72471ef7, "pktlast" },
	{ 0x8518b4d4, "bcm_parse_tlvs_min_bodylen" },
	{ 0x4ff366f6, "si_get_macclk_mul_fact" },
	{ 0x73129f38, "bcmerrorstr" },
	{ 0x90a855bd, "si_force_islanding" },
	{ 0x9d669763, "memcpy" },
	{ 0x18f94216, "si_detach" },
	{ 0x399e6ae2, "si_clkctl_xtal" },
	{ 0x2c8ef7ad, "si_pcie_get_request_size" },
	{ 0x217e2cf, "si_numcoreunits" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x246ece2b, "pktq_mlen" },
	{ 0x4ba1611f, "skb_pull" },
	{ 0x3e5809f7, "dma_addrwidth" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe2e78bc2, "eth_type_trans" },
	{ 0x19b5297a, "si_pmu_pllupd" },
	{ 0xc8daddeb, "si_pmu_slow_clk_reinit" },
	{ 0xba2779c9, "osl_ctfpool_init" },
	{ 0x634280b1, "si_pcie_configspace_restore" },
	{ 0xe3a3229d, "si_pll_reset" },
	{ 0x21188997, "si_pmu_get_bb_vcofreq" },
	{ 0x930c4453, "si_pciereg" },
	{ 0x2d3a7542, "osl_pktalloced" },
	{ 0xc97840c7, "osl_error" },
	{ 0x8a038e41, "si_pcie_configspace_cache" },
	{ 0x4f14cac4, "si_pmu_radio_enable" },
	{ 0xc2db9df1, "bcm_write_tlv" },
	{ 0xf81e9614, "osl_pci_device" },
	{ 0xf7fe1b3d, "si_deviceremoved" },
	{ 0x4cbda439, "si_pci_down" },
	{ 0x3364f720, "pktq_deinit" },
	{ 0x56fc28c1, "si_config_4364_d11_oob" },
	{ 0xea147363, "printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe7f0af34, "bcm_copy_tlv" },
	{ 0x8949858b, "schedule_work" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x17ed219, "si_btcgpiowar" },
	{ 0x84095e80, "si_coreidx" },
	{ 0xd1007a33, "dev_alloc_skb" },
	{ 0xbce0eab5, "si_findcoreidx" },
	{ 0x6399f369, "pktq_pdeq_prev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=igs,emf";

MODULE_ALIAS("pci:v*d*sv*sd*bc02sc80i*");

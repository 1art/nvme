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
	{ 0x59101cf6, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xf5d6b4d, "kmalloc_caches" },
	{ 0x1dc593c0, "pci_bus_read_config_byte" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xb85f3bbe, "pv_lock_ops" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbc347675, "dma_set_mask" },
	{ 0x2436313f, "pci_disable_device" },
	{ 0xc4e2d475, "pci_disable_msix" },
	{ 0xfec836d2, "set_page_dirty_lock" },
	{ 0x4aabc7c4, "__tracepoint_kmalloc" },
	{ 0x98d5c78e, "queue_work" },
	{ 0x7257c4f9, "__register_chrdev" },
	{ 0x152202be, "filp_close" },
	{ 0x3fec048f, "sg_next" },
	{ 0x685cf233, "x86_dma_fallback_dev" },
	{ 0x54832714, "mutex_unlock" },
	{ 0x396ac4f2, "pci_bus_write_config_word" },
	{ 0x4c95e40f, "dma_pool_destroy" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x8c55139d, "pci_set_master" },
	{ 0xde0bdcff, "memset" },
	{ 0x480bd6bb, "kmem_cache_alloc_notrace" },
	{ 0xc537e293, "device_del" },
	{ 0x907ec5c7, "pci_enable_msix" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc603eeb9, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x2b200d96, "vmap" },
	{ 0xb4390f9a, "mcount" },
	{ 0x7baaf310, "pci_bus_write_config_dword" },
	{ 0x56fc650f, "mutex_lock" },
	{ 0x575bb49, "destroy_workqueue" },
	{ 0x39e27f81, "device_create" },
	{ 0x954e2f28, "dma_pool_free" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xaba0366b, "__create_workqueue_key" },
	{ 0xdb5d7816, "fput" },
	{ 0x2c5b910b, "flush_workqueue" },
	{ 0x8d9f5cfe, "pci_select_bars" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x1ee2b5c, "pci_bus_read_config_word" },
	{ 0x5ca41392, "pci_bus_read_config_dword" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x678beed3, "dma_pool_alloc" },
	{ 0x7c61340c, "__release_region" },
	{ 0xb429978e, "pci_unregister_driver" },
	{ 0x6443d74d, "_raw_spin_lock" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x4e436701, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x79e0434e, "remap_pfn_range" },
	{ 0x236c8c64, "memcpy" },
	{ 0xd927fbd0, "pci_disable_msi" },
	{ 0x14a72141, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0x78d5d0f, "__pci_register_driver" },
	{ 0x737c1563, "put_page" },
	{ 0x867f2d8a, "class_destroy" },
	{ 0x9edbecae, "snprintf" },
	{ 0x11e94dda, "pci_enable_msi_block" },
	{ 0x8ca46b71, "pci_iomap" },
	{ 0xdad99aa1, "pci_enable_device" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x57ea3c8c, "dma_pool_create" },
	{ 0x6a807896, "__class_create" },
	{ 0xda5d5030, "dma_ops" },
	{ 0x32c793c7, "get_user_pages_fast" },
	{ 0x9e32ac7e, "vfs_write" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc1e89689, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");

MODULE_INFO(srcversion, "74B8C8FFE673A8D022BDA4B");

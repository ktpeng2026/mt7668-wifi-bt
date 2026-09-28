#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btmtk_interrupt, "_gpl", "");
KSYMTAB_FUNC(btmtk_enable_hs, "_gpl", "");
KSYMTAB_FUNC(btmtk_add_card, "_gpl", "");
KSYMTAB_FUNC(btmtk_remove_card, "_gpl", "");

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c*v037Ad6630*");
MODULE_ALIAS("sdio:c*v037Ad6632*");
MODULE_ALIAS("sdio:c*v037Ad7668*");
MODULE_ALIAS("sdio:c*v037Ad7666*");

MODULE_INFO(srcversion, "057395B93C5FF2845B58A66");

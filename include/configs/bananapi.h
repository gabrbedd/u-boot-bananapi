/*
 * (C) Copyright 2014 Bo Shen <voice.shen@gmail.com>
 *
 * Configuration settings for the BananaPi with Allwinner A20 (sun7i) CPU
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef __CONFIG_H
#define __CONFIG_H

/*
 * A20 specific configuration
 */
#define CONFIG_SUN7I		/* sun7i SoC generation */
#define CONFIG_CLK_FULL_SPEED	912000000

#define CONFIG_SYS_PROMPT	"BananaPi> "
#define CONFIG_MACH_TYPE	4284

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

#undef CONFIG_IDENT_STRING
#define CONFIG_IDENT_STRING	" LeMaker Team "

#define CONFIG_ARCH_MISC_INIT

#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND \
	"if run loadbootscr; then " \
	"echo Jumping to ${bootscr};" \
	"source ${scriptaddr};" \
	"fi;" \
	"run autoboot;" \
	""

#endif /* __CONFIG_H */

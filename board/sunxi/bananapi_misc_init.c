/*
 * (C) Copyright 2014 Bo Shen <voice.shen@gmail.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/gpio.h>
#include <asm/arch/gpio.h>

static void bananapi_gmac_phy_power_on(void)
{
	gpio_direction_output(SUNXI_GPH(23), 1);
	mdelay(200);
}

int arch_misc_init(void)
{
	/* Power On GMAC PHY */
	bananapi_gmac_phy_power_on();

	return 0;
}

// SPDX-License-Identifier: GPL-2.0-only

#include <linux/init.h>
#include <linux/irqchip.h>
#include <linux/kernel.h>

#include <asm/bootinfo.h>
#include <asm/prom.h>
#include <asm/time.h>

void __init prom_init(void)
{
}

void __init prom_free_prom_memory(void)
{
}

const char *get_system_type(void)
{
	return "Realtek RTL8197F";
}

void __init plat_mem_setup(void)
{
	void *dtb;

	dtb = get_fdt();
	if (!dtb)
		panic("no dtb found");

	__dt_setup_arch(dtb);
}

void __init arch_init_irq(void)
{
	irqchip_init();
}

void __init plat_time_init(void)
{
	r4k_clockevent_init();
}

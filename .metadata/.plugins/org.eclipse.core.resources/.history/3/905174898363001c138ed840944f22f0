/*
 * vector.cpp
 *
 *  Created on: Dec 20, 2021
 *      Author: khorton
 */
#include "faults.h"

extern "C" void HardFault_Handler()
{
	printf("Hardfault\n");
	while(1);
}

extern "C" void MemManage_Handler()
{
	printf("Memory Manage Fault\n");
	while(1);
}

extern "C" void BusFault_Handler()
{
	printf("Bus Fault\n");
	while(1);
}

extern "C" void UsageFault_Handler()
{
	printf("Usage Fault\n");
	while(1);
}

namespace Faults {
	void gen_usage_fault()
	{
		void (*addr)(void);
		uint32_t *SRAM = (uint32_t*)0x20010000;
		addr = (void(*)())SRAM;
		addr();
	}

	void gen_memory_fault()
	{
		void (*addr)(void);
		uint32_t *SRAM = (uint32_t*)0x40020000;
		addr = (void(*)())SRAM;
		addr();
	}
}


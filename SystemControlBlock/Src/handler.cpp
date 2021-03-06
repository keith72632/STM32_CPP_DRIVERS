/*
 * handler.cpp
 *
 *  Created on: Dec 23, 2021
 *      Author: khorton
 */

#include <stdint.h>
#include <stdio.h>

uint32_t volatile *odr = (uint32_t*)0x40020c14;

extern "C" {
	__attribute__((naked)) void SysTick_Handler()
	{
		__asm volatile("B Systick_Handler_C");
	}

	extern "C" void Systick_Handler_C()
	{
		uint32_t val;
		__asm volatile("MOV R0,%0": "=r"(val));
		*odr ^= 1 << 15;
		printf("tick and : %ld\n", val);
	}
}

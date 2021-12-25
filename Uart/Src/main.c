/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include <stdio.h>
#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

uint32_t volatile *ahb1 = (uint32_t*)0x40023830;
uint32_t volatile *apb1 = (uint32_t*)0x40023840;
uint32_t volatile *modea = (uint32_t*)0x40020000;
uint32_t volatile *afrl = (uint32_t*)0x40020020;
uint32_t volatile *usart_cr1 = (uint32_t*)0x4000440c;

int main(void)
{
	*ahb1 |= 1 << 0;
	*apb1 |= 1 << 17;
	*modea |= (2 << 4) | (2 << 6);
	*afrl |= (7 << 8) | (7 << 12);
	*usart_cr1 |= (1 << 13);
	printf("Hey\n");
    /* Loop forever */
	for(;;);
}

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
#include "usart.h"
#include "stm32f407xx.h"

uint32_t volatile *rcc = (uint32_t*)RCC_AHB1;
uint32_t volatile *mode = (uint32_t*)0x40020c00;
uint32_t volatile *odr = (uint32_t*)0x40020c14;
uint32_t volatile *nvic = (uint32_t*)0xe000e104;
uint32_t volatile *pend = (uint32_t*)0xe000e204;

void init_led()
{
	*rcc |= (1 << 3);
	*mode |= (1 << 30);
}

void toggle_led()
{
	*odr ^= (1 << 15);
}

int main(void)
{
	init_led();

	Usart ustream = Usart(USART3);
	ustream.init_clocks();
	ustream.config_gpio();
	ustream.config_usart();
	char s[] = "shell>\r\n";
	ustream.puts(s);

	*pend |= (1 << 7);
//	*nvic |= (1 << 7);

	for(int i = 0; i < 1000000; i++){};

	while(1){
		uint32_t data = ustream.get();
		if(data)
			toggle_led();
	};
}

extern "C" void USART3_IRQHandler()
{
	toggle_led();

}

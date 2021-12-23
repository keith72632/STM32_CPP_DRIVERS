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

#include <stdint.h>
#include <stdio.h>
#include <algorithm>
#include <array>
#include <stack>
#include "scb.h"
#include "faults.h"
#include "systick.h"

	//led lights
uint32_t *rcc_d = (uint32_t*)0x40023830;
uint32_t *mode = (uint32_t*)0x40020c00;


int main(void)
{
	*rcc_d |= 1 << 3; //enable gpio d clock
	*mode |= (1 << 30); //pin 15 output mode

	//just some dumb shit
	std::array<char, 5> list{{'s', 't', 'a', 'r', 't'}};
	std::for_each(list.begin(), list.end(), [](char e){ printf("%c\n", e); });
    /* Loop forever */



	SCB::SCB *scb = (SCB::SCB*)0xe000ed00;
	scb->shcrs.all_faults_enable();
	//Faults::gen_memory_fault();

	Systick::systick *syst = (Systick::systick*)0xe000e010;
	syst->control_status_reg.systick_enable();
	syst->control_status_reg.systick_int();

	//this 24 bit value is the time between "ticks"
	syst->reload_reg.load(0xfffff);

	//pushing this garbage just to check stack analyzation in systick handler
	std::stack<int> stck;
	stck.push(66666);
	uint32_t val = stck.top();

	for(;;);
}




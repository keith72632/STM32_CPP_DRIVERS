/*
 * rcc.h
 *
 *  Created on: Dec 16, 2021
 *      Author: khorton
 */

#ifndef RCC_H_
#define RCC_H_

#include <stdint.h>

namespace Rcc {

	typedef struct {
	public:
		uint32_t gpioa :1;
		uint32_t gpiob :1;
		uint32_t gpioc :1;
		uint32_t gpiod :1;
		uint32_t gpioe :1;
		uint32_t gpiof :1;
		uint32_t space :26;
		void gpioa_clk();
		void gpiob_clk();
		void gpioc_clk();
		void gpiod_clk();
		void gpioe_clk();
		void gpiof_clk();

	}AHB1_ENR_t;

} /* namespace Rcc */

#endif /* RCC_H_ */

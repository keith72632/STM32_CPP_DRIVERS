/*
 * gpio.h
 *
 *  Created on: Dec 16, 2021
 *      Author: khorton
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <stdint.h>

namespace Gpio {
	typedef struct {
		uint32_t mode0 :2;
		uint32_t mode1 :2;
		uint32_t mode2 :2;
		uint32_t mode3 :2;
		uint32_t mode4 :2;
		uint32_t mode5 :2;
		uint32_t mode6 :2;
		uint32_t mode7 :2;
		uint32_t mode8 :2;
		uint32_t mode9 :2;
		uint32_t mode10 :2;
		uint32_t mode11 :2;
		uint32_t mode12 :2;
		uint32_t mode13 :2;
		uint32_t mode14 :2;
		uint32_t mode15 :2;
	}GPIO_MODE_t;

	typedef struct {
		uint32_t pin0 :1;
		uint32_t pin1 :1;
		uint32_t pin2 :1;
		uint32_t pin3 :1;
		uint32_t pin4 :1;
		uint32_t pin5 :1;
		uint32_t pin6 :1;
		uint32_t pin7 :1;
		uint32_t pin8 :1;
		uint32_t pin9 :1;
		uint32_t pin10 :1;
		uint32_t pin11 :1;
		uint32_t pin12 :1;
		uint32_t pin13 :1;
		uint32_t pin14 :1;
		uint32_t pin15 :1;
	}GPIO_ODR_t;

	typedef struct{
		GPIO_MODE_t mode;
		uint32_t blank1;
		uint32_t blank2;
		uint32_t black3;
		uint32_t blank4;
		GPIO_ODR_t pin;
		void mode_output_pin15(uint32_t mode);
		void led_on();
	}__attribute__((packed))GPIO_T;
} /* namespace Gpio */

#endif /* GPIO_H_ */

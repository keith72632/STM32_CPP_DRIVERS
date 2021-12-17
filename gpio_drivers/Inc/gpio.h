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

	typedef struct{
		GPIO_MODE_t mode;
		void mode_output_pin15();
	}__attribute__((packed))GPIO_T;
} /* namespace Gpio */

#endif /* GPIO_H_ */
/*
 * gpio.cpp
 *
 *  Created on: Dec 16, 2021
 *      Author: khorton
 */

#include <gpio.h>

namespace Gpio {

	void Gpio::GPIO_T::mode_output_pin15(uint32_t mode)
	{
		this->mode.mode15 = mode;
	}

	void Gpio::GPIO_T::led_on()
	{
		this->pin.pin15 = 0x01;
	}

} /* namespace Gpio */

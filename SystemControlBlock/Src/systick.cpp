/*
 * systick.cpp
 *
 *  Created on: Dec 22, 2021
 *      Author: khorton
 */


#include "systick.h"

namespace Systick {
	void SYST_CSR_t::systick_enable()
	{
		this->enable = 0x01;
	}

	void SYST_CSR_t::systick_int()
	{
		this->tick_int = 0x01;
	}

	void SYST_RVR_t::load(uint32_t reloadval)
	{
		this->reload = reloadval;
	}

	void SYST_CVR_t::set_current(uint32_t val)
	{
		this->current = val;
	}

}


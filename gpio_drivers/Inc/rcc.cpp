/*
 * rcc.cpp
 *
 *  Created on: Dec 16, 2021
 *      Author: khorton
 */

#include <rcc.h>

namespace Rcc {

void AHB1_ENR_t::gpioa_clk()
{
	this->gpioa = 0x01;

}

void AHB1_ENR_t::gpiob_clk()
{
	this->gpiob = 0x01;

}

void AHB1_ENR_t::gpioc_clk()
{
	this->gpioc = 0x01;

}

void AHB1_ENR_t::gpiod_clk()
{
	this->gpiod = 0x01;

}

void AHB1_ENR_t::gpioe_clk()
{
	this->gpioe = 0x01;

}

void AHB1_ENR_t::gpiof_clk()
{
	this->gpiof = 0x01;

}

} /* namespace Rcc */

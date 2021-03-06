/*
 * usart.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: khorton
 */

#include <usart.h>
#include "stm32f407xx.h"

Usart::Usart(USART_t usart) {
	// TODO Auto-generated constructor stub
	this->_usart = usart;
	switch(usart)
	{
	case USART1:
		this->_rcc_usart = (uint32_t*)RCC_USART1;
		break;
	case USART2:
		this->_rcc_usart = (uint32_t*)RCC_USART2;
		this->_rcc_gpio = (uint32_t*)RCC_GPIOA;
		this->_gpio_mode = (uint32_t*)GPIOA_MODE;
		this->_gpio_aflr = (uint32_t*)GPIOA_AFLR;
		this->_usart_cr1 = (uint32_t*)USART2_CR1;
		this->_usart_brr = (uint32_t*)USART2_BRR;
		this->_usart_sr = (uint32_t*)USART2_SR;
		this->_usart_dr = (uint32_t*)USART2_DR;
		break;
	case USART3:
		this->_rcc_usart = (uint32_t*)RCC_USART3;
		this->_rcc_gpio = (uint32_t*)RCC_GPIOC;
		this->_gpio_mode = (uint32_t*)GPIOC_MODE;
		this->_gpio_afhr = (uint32_t*)GPIOC_AFHR;
		this->_usart_cr1 = (uint32_t*)USART3_CR1;
		this->_usart_brr = (uint32_t*)USART3_BRR;
		this->_usart_sr = (uint32_t*)USART3_SR;
		this->_usart_dr = (uint32_t*)USART3_DR;
		break;
	case USART6:
		this->_rcc_usart = (uint32_t*)RCC_USART6;
		break;
	default:
		this->_rcc_usart = NULL;
	}
}

void Usart::init_clocks(void)
{
	switch(this->_usart)
	{
	case USART1:
		*_rcc_usart |= 1 << 4;
		break;
	case USART2:
		*_rcc_usart |= 1 << 17;
		*_rcc_gpio |= 1 << 0;
		break;
	case USART3:
		*_rcc_usart |= 1 << 18;
		*_rcc_gpio |= 1 << 2;
	default:
		break;
	}
}

void Usart::config_gpio()
{
	switch(this->_usart)
	{
	case USART2:
		*_gpio_mode |= 2 << 4 | 2 << 6;
		*_gpio_aflr |= 7 << 8 | 7 << 12;
		break;
	case USART3:
		*_gpio_mode |= 2 << 20 | 2 << 22;
		*_gpio_afhr |= 7 << 8 | 7 << 12;
		break;
	}

}

void Usart::config_usart()
{
	*_usart_brr = 0x0683;
	*_usart_cr1 |= 1 << 2 | 1 << 3 | 1 << 5 | 1 << 13;
}

void Usart::put(char c)
{
	while(!(*_usart_sr & 0x0080)){};
	*_usart_dr = c;
}

void Usart::puts(char *s)
{
	if(*s)
	{
		this->put(*s);
		this->puts(s+=1);
	}
	while(!(*_usart_sr & 0x0040)){};
}

uint32_t Usart::get()
{
	uint32_t temp;
	while(!(*_usart_sr & (1 << 5)));
	temp = *_usart_dr;
	return temp;
}
Usart::~Usart() {
	// TODO Auto-generated destructor stub
}


/*
 * usart.h
 *
 *  Created on: Dec 25, 2021
 *      Author: khorton
 */

#ifndef USART_H_
#define USART_H_

#include <stdint.h>
#include <stdlib.h>

typedef enum {
	USART1,
	USART2,
	USART3,
	USART4,
	USART5,
	USART6
}USART_t;

class Usart {
	private:
		uint32_t volatile *_rcc_usart;
		uint32_t volatile *_rcc_gpio;
		uint32_t volatile *_gpio_mode;
		uint32_t volatile *_gpio_aflr;
		uint32_t volatile *_gpio_afhr;
		uint32_t volatile *_usart_cr1;
		uint32_t volatile *_usart_brr;
		uint32_t volatile *_usart_sr;
		uint32_t volatile *_usart_dr;
		USART_t _usart;
	public:
		Usart(USART_t usart);
		void init_clocks();
		void config_gpio();
		void config_usart();
		void put(char c);
		void puts(char *s);
		uint32_t get(void);
		virtual ~Usart();
};

#endif /* USART_H_ */

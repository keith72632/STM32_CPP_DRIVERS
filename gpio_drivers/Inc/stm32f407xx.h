/*
 * stm32f407xx.h
 *
 *  Created on: Dec 16, 2021
 *      Author: khorton
 */

#ifndef STM32F407XX_H_
#define STM32F407XX_H_


#define GPIOA_CLK        0x40023830
#define GPIOA_BASE       0x40020000
#define GPIOA_MODE       GPIOA_BASE
#define GPIOA_OTYPER     (GPIOA_BASE + 0x04)
#define GPIOA_OSPEEDR    (GPIOA_BASE + 0x08)
#define GPIOA_IDR        (GPIOA_BASE + 0x10)
#define GPIOA_ODR        (GPIOA_BASE + 0x14)
#define GPIOA_AFRL       (GPIOA_BASE + 0x20)
#define GPIOA_AFRH       (GPIOA_BASE + 0x24)

#define GPIOD_CLK        0x40023830
#define GPIOD_BASE       0x40020c00
#define GPIOD_MODE       GPIOD_BASE
#define GPIOD_OSPEEDR    (GPIOD_BASE + 0x08)
#define GPIOD_IDR        (GPIOD_BASE + 0x10)
#define GPIOD_ODR        (GPIOD_BASE + 0x14)
#define GPIOD_AFRL       (GPIOD_BASE + 0x20)
#define GPIOD_AFRH       (GPIOD_BASE + 0x24)

#endif /* STM32F407XX_H_ */

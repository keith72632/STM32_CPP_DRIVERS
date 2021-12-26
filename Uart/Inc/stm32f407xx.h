/*
 * stm32f407xx.h
 *
 *  Created on: Dec 25, 2021
 *      Author: khorton
 */

#ifndef STM32F407XX_H_
#define STM32F407XX_H_

#define RCC_AHB1   0x40023830
#define RCC_APB1   0x40023840
#define RCC_APB2   0x40023844

#define RCC_USART1 RCC_APB2
#define RCC_USART2 RCC_APB1
#define RCC_USART3 RCC_APB1
#define RCC_USART6 RCC_APB2
#define RCC_GPIOA  RCC_AHB1


#define GPIOA_MODE 0x40020000
#define GPIOA_AFLR 0x40020020

#define USART2_BASE 0x40004400
#define USART2_SR   USART2_BASE
#define USART2_DR   (USART2_BASE + 0x04)
#define USART2_BRR  (USART2_BASE + 0x08)
#define USART2_CR1  (USART2_BASE + 0x0C)


#endif /* STM32F407XX_H_ */
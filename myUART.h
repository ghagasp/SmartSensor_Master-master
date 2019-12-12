/*
 * myUART.h
 *
 *  Created on: Dec 13, 2019
 *      Author: Ghagas
 */

#ifndef MYUART_H_
#define MYUART_H_

#include <avr/io.h>

#define UART_BAUD_RATE 9600
#define VBAUDRATE (((F_CPU / (UART_BAUD_RATE * 16UL))) - 1)
#define BAUDH VBAUDRATE / 256
#define BAUDL VBAUDRATE % 256

void USART_Init(void);
volatile unsigned char USART_GetChar(void);
void USART_PutChar(unsigned char data);
void USART_PutStr(char *text);
void USART_PutNum(int16_t number);

#endif /* MYUART_H_ */

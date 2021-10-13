/*
 * uart_hal.c
 *
 * Created: 9/25/2021 10:14:41 PM
 *  Author: Omar
 */ 
#include "uart_hal.h"
void uart_hal_init(uart_config configs)
{
	uart_init(configs);
}
void uart_sendString(const uint8_t*str)
{
	uart_send_string(str);
}
void uart_receiveString(uint8_t* str)
{
	uart_receive_string(str);
}
void uart_sendByte(uint8_t data)
{
	uart_send_byte(data);
}
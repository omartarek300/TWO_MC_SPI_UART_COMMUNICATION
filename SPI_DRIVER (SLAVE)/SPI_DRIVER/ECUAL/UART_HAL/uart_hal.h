/*
 * uart_hal.h
 *
 * Created: 9/25/2021 10:14:23 PM
 *  Author: Omar
 */ 


#ifndef UART_HAL_H_
#define UART_HAL_H_
#include "../../MCAL/UART/uart.h"


/************************************** FUNCTION PROTOTYPE *********************************/
/*******
Function Description: this function initiates the UART pripheral and turn in sending and receiving
parameter: configs: a structure contains all the required configurations: baud_rate,
																		  mode;
																		  stop_bit_en;
																		  parity;
																		  data_bits;
																		  iterrupt;
return: none
*/
void uart_hal_init(uart_config configs);

/*******
Function Description: this function sends a string
parameter:  string: the string needed to be sent
return: none
*/
void uart_sendString(const uint8_t*str);

/*******
Function Description: this function receives a string
parameter: str: a buffer receives the comming bytes
return: none
*/
void uart_receiveString(uint8_t* str);

/*******
Function Description: this function sends a byte
parameter:  data: the data needed to be sent
return: none
*/
void uart_sendByte(uint8_t data);

#endif /* UART_HAL_H_ */
/*
 * app.c
 *
 * Created: 10/11/2021 11:06:21 PM
 *  Author: Omar
 */ 
#include "app.h"
void APP_INIT(OPERATING_MODE mode)
{
	SPI_INIT(mode);
	uart_config conf = {2400, asynchronous, one_stop_bit, no_parity, eight_bit, Disable};
	uart_hal_init(conf);
}
void APP_Flow()
{
	uart_receiveString(&sent_str);
	SPI_Master_sendString(&sent_str, SLAVE_ONE);
	SPI_Master_sendByte(STR_TERMINATOR, SLAVE_ONE);
}
/*
 * SPI_HAL.c
 *
 * Created: 10/11/2021 10:11:54 PM
 *  Author: Omar
 */ 
#include "SPI_HAL.h"

void SPI_INIT(OPERATING_MODE mode)
{
	if(mode == MASTER)
	{
		SPI_MasterInit();
	}
	else if(mode == SLAVE)
	{
		SPI_SlaveInit();
	}
}
void SPI_Master_sendByte(uint8_t data, uint8_t slave_num)
{
	SPI_Master_send_byte(data, slave_num);
}
void SPI_Master_sendString(uint8_t* str, uint8_t slave_num)
{
	SPI_Master_send_string(str, slave_num);
}
uint8_t SPI_Slave_receiveByte()
{
	return SPI_Slave_receive_byte();
}
void SPI_Slave_receiveString(uint8_t* str)
{
	SPI_Slave_receive_string(str);
}
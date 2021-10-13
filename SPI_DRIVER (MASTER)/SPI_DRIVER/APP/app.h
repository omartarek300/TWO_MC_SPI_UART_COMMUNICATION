/*
 * app.h
 *
 * Created: 10/11/2021 11:06:28 PM
 *  Author: Omar
 */ 


#ifndef APP_H_
#define APP_H_
/********************************************** INCLUDES ****************************************************/

#include "../ECUAL/SPI_HAL/SPI_HAL.h"
#include "../ECUAL/DIO_HAL/DIO_HAL.h"
#include "../ECUAL/UART_HAL/uart_hal.h"
#include "../MCAL/TIMER/timer.h"
#include <string.h>
/****************************************** LOCAL MACROS ************************************************/
#define SLAVE_ONE 1
#define STR_TERMINATOR '\0'
/****************************************** GLOBAL VARIABLES ********************************************/

uint8_t* sent_str;

/****************************************** FUNCTION PROTOTYPE ******************************************/

/*******
	Function Description: this function specify MASTER or SlAVE and selects which port to set the output on
	parameter: mode: selects MASTER or SLAVE	   
	return: none
*/
void APP_INIT(OPERATING_MODE mode);

/*******
	Function Description: this function sets the program flow to be executed
	parameter: none
	return: none
*/
void APP_Flow();



#endif /* APP_H_ */
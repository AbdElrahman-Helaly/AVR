#include "STD.h"
#include "bit.h"
#include "DIO_interface.h"
#include <util/delay.h>


int main(void)
{

	DIO_u8setPinDirection(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_OUTPUT);

	
	while(1)
	{
	     DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_High);
		 DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_Low);

	     _delay_ms(500);
	     DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_High);
		 DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_Low);


		
		
	}
	
	return 0;
}

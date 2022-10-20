#include "STD.h"
#include "bit.h"
#include "DIO_interface.h"
#include "LCD_Interface.h"
#include <util/delay.h>


int main(void)
{
DIO_voidsetportDirection(DIO_u8PORTD , DIO_u8PORT_OUTPUT);

DIO_voidsetPinDirection(DIO_u8PORTC , DIO_u8PIN0 , DIO_u8PIN_OUTPUT);
DIO_voidsetPinDirection(DIO_u8PORTC , DIO_u8PIN1 , DIO_u8PIN_OUTPUT);
DIO_voidsetPinDirection(DIO_u8PORTC , DIO_u8PIN2 , DIO_u8PIN_OUTPUT);


CLCD_VoidInti();




while(1)
{
	CLCD_SendString(' Hello ');



}




return 0;
}

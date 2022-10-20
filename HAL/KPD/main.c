#include"STD.h"
#include "bit.h"
#include"DIO_interface.h"
#include"PORT_interface.h"
#include"CLCD_interFace.h"
#include"KeyPad_interface.h"



void main(void){
PORT_voidInit();
CLCD_VoidInti();
//u8 Local_u8Num;
CLCD_SendString("ABBB");
DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_High);

		while(1){
if((get(DIO_u8PORTA,DIO_u8PIN0)==0)){
	DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_High);

		}
else {
	DIO_u8SetPinvalue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_Low);

}
}

}


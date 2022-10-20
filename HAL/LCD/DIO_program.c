/******************************************************************/
/******************************************************************/
/*******************    Eng/abdelrahmanHelaly  *******************/
/*******************    Layer:MCAL              *******************/
/*******************    SEC: DIO                *******************/
/*******************    version:1.00            *******************/
/******************************************************************/
/******************************************************************/
#include "STD.h"
#include "bit.h"
#include "DIO_register.h"
#include "DIO_private.h"
#include "DIO_config.h"
#include "DIO_interface.h"


void DIO_voidsetPinDirection(u8 Copy_u8port,u8 Copy_u8pin,u8 Copy_u8Direction)
{ }



/***********************************************************************************************************/
void DIO_voidsetportDirection(u8 Copy_u8port,u8 Copy_u8Direction)
{
	switch(Copy_u8port)
	{
	case DIO_u8PORTA: DDRA=Copy_u8Direction;break;
	case DIO_u8PORTB: DDRB=Copy_u8Direction;break;
	case DIO_u8PORTC: DDRC=Copy_u8Direction;break;
	case DIO_u8PORTD: DDRD=Copy_u8Direction;break;
	default: break;
	}

}



/************************************************************************************************************/


void DIO_voidSetPinvalue(u8 Copy_u8port,u8 Copy_u8pin,u8 Copy_u8value)
{
	if(Copy_u8pin <= DIO_u8PIN7){
		if(Copy_u8value == DIO_u8PIN_Low){
			switch(Copy_u8port){
			case DIO_u8PORTA: clear_bit(PORTA,Copy_u8pin);break;
			case DIO_u8PORTB: clear_bit(PORTB,Copy_u8pin);break;
			case DIO_u8PORTC: clear_bit(PORTC,Copy_u8pin);break;
			case DIO_u8PORTD: clear_bit(PORTD,Copy_u8pin);break;
			default:
				break;
			}
		}
		else if(Copy_u8value == DIO_u8PIN_High){
			switch(Copy_u8port){
			case DIO_u8PORTA: set_bit(PORTA,Copy_u8pin);break;
			case DIO_u8PORTB: set_bit(PORTB,Copy_u8pin);break;
			case DIO_u8PORTC: set_bit(PORTC,Copy_u8pin);break;
			case DIO_u8PORTD: set_bit(PORTD,Copy_u8pin);break;
			default:
				break;
			}
		}
		else{
		}
	}


	else{
	}

}











/**************************************************************************************************************/

void DIO_voidsetportvalue(u8 Copy_u8port,u8 Copy_u8value){
	switch(Copy_u8port){
	case DIO_u8PORTA: PORTA=Copy_u8value;break;
	case DIO_u8PORTB: PORTB=Copy_u8value;break;
	case DIO_u8PORTC: PORTC=Copy_u8value;break;
	case DIO_u8PORTD: PORTD=Copy_u8value;break;
	default: break;
	}
}

/*******************************************************************************************/



u8 DIO_u8GetpinValue(u8 Copy_u8port,u8 Copy_u8pin)
{
	u8 u8ResultLocal;


	if(Copy_u8pin <= DIO_u8PIN7)
	{
		switch(Copy_u8port)
		{
		case DIO_u8PORTA :u8ResultLocal = get(PINA,Copy_u8pin);break;
		case DIO_u8PORTB :u8ResultLocal = get(PINB,Copy_u8pin);break;
		case DIO_u8PORTC :u8ResultLocal = get(PINC,Copy_u8pin);break;
		case DIO_u8PORTD :u8ResultLocal = get(PIND,Copy_u8pin);break;
		default:break;
		}

	}
	else{
	}
return u8ResultLocal;
}

/*******************************************************************************************/

u8 DIO_u8GetPortValue (u8 Copy_u8port)
{
	u8 u8ResultLocal;

	switch(Copy_u8port)
	{

	case DIO_u8PORTA : u8ResultLocal = PINA ; break;
	case DIO_u8PORTB : u8ResultLocal = PINB ; break;
	case DIO_u8PORTC : u8ResultLocal = PINC ; break;
	case DIO_u8PORTD : u8ResultLocal = PIND ; break;
	default : break ;

}
return u8ResultLocal ;
}












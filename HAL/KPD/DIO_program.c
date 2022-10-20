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
#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_private.h"
#include "DIO_config.h"




u8 DIO_u8SetPinvalue(u8 Copy_u8port,u8 Copy_u8pin,u8 Copy_u8value)
{
	u8 Local_u8ErrorStat = 0;
	if(Copy_u8pin <= DIO_u8PIN7){
		if(Copy_u8value == DIO_u8PIN_Low){
			switch(Copy_u8port){
			case DIO_u8PORTA: clear_bit(PORTA,Copy_u8pin);break;
			case DIO_u8PORTB:clear_bit(PORTB,Copy_u8pin);break;
			case DIO_u8PORTC: clear_bit(PORTC,Copy_u8pin);break;
			case DIO_u8PORTD: clear_bit(PORTD,Copy_u8pin);break;
			default:
				Local_u8ErrorStat=1;break;
			}
		}
		else if(Copy_u8value == DIO_u8PIN_High){
			switch(Copy_u8port){
			case DIO_u8PORTA: set_bit(PORTA,Copy_u8pin);break;
			case DIO_u8PORTB: set_bit(PORTB,Copy_u8pin);break;
			case DIO_u8PORTC: set_bit(PORTC,Copy_u8pin);break;
			case DIO_u8PORTD: set_bit(PORTD,Copy_u8pin);break;
			default:
				Local_u8ErrorStat=1;break;
			}
		}
		else{
			Local_u8ErrorStat=1;
		}
	}


	else{
		Local_u8ErrorStat=1;
	}
	return Local_u8ErrorStat;

}















/**************************************************************************************************************/

u8 DIO_u8setportvalue(u8 Copy_u8port,u8 Copy_u8value){
	u8 Local_u8ErrorStat = 0;
	switch(Copy_u8port){
	case DIO_u8PORTA: PORTA=Copy_u8value;break;
	case DIO_u8PORTB: PORTB=Copy_u8value;break;
	case DIO_u8PORTC: PORTC=Copy_u8value;break;
	case DIO_u8PORTD: PORTD=Copy_u8value;break;
	default: Local_u8ErrorStat=1;break;
	}
	return Local_u8ErrorStat;
}

/*******************************************************************************************/



u8 DIO_u8GetpinValue(u8 Copy_u8port,u8 Copy_u8pin,u8* Copy_pu8value)
{

	u8 Local_u8ErrorStat = 0;
	if((Copy_pu8value != NULL) && (Copy_u8pin <= DIO_u8PIN7))
	{
		switch(Copy_u8port){
		case DIO_u8PORTA : *Copy_pu8value = get(PINA,Copy_u8pin);break;
		case DIO_u8PORTB : *Copy_pu8value = get(PINB,Copy_u8pin);break;
		case DIO_u8PORTC : *Copy_pu8value = get(PINC,Copy_u8pin);break;
		case DIO_u8PORTD : *Copy_pu8value = get(PIND,Copy_u8pin);break;
		default:Local_u8ErrorStat=1;break;
		}

	}
	else{
		Local_u8ErrorStat=1;
	}
	return Local_u8ErrorStat ;

}


/********************************************************************************************/

/**********SEVENSEDMENT************/










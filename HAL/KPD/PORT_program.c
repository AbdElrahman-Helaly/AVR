/******************************************************************/
/******************************************************************/
/**********************    eng/abdelrahman helaly  ****************/
/**********************    Layer:MCAL              ****************/
/**********************    SEC: PORT                ****************/
/**********************    version:1.00            ****************/
/******************************************************************/
/******************************************************************/
#include "STD.h"
#include "PORT_Config.h"
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_register.h"

void PORT_voidInit(void){
	
	  DDRA =         PORTA_DIR;
	  DDRB =         PORTB_DIR;
	  DDRC =         PORTC_DIR;
	  DDRD =         PORTD_DIR;
	
	  PORTA =      PORTA_IniValue  ;
	  PORTB =      PORTB_IniValue  ;
      PORTC =      PORTC_IniValue  ;
      PORTD =      PORTD_IniValue  ;
}

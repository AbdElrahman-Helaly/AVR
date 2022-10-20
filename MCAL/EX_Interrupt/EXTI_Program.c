/******************************************************************/
/******************************************************************/
/*******************    Eng:abdelrahman ELsayed   *****************/
/*******************    Layer:MCAL                ******************/
/*******************    SEC: EXTI                 ******************/
/*******************    version:1.00             ******************/
/******************************************************************/
/******************************************************************/
#include "bit.h"
#include "STD.h"
#include "EXTI_Config.h"
#include "EXTI_Intrface.h"
#include "EXTI_Register.h"


void GIE_voidEnable(void)
{
	SET_BIT(SREG,SREG_I);
}

void GIE_voidDisable(void)
{
	CLR_BIT(SREG,SREG_I);
}

void EXTI_voidInt0Init(void)
{
#if     INT0_SENSE == LOW_LEVEL
	    CLR_BIT(MCUCR,MCUCR_ISC01);
		CLR_BIT(MCUCR,MCUCR_ISC00);

#elif	INT0_SENSE == ON_CHANGE
	    CLR_BIT(MCUCR,MCUCR_ISC01);
		SET_BIT(MCUCR,MCUCR_ISC00);

#elif   INT0_SENSE == FALLING_EDGE
	    SET_BIT(MCUCR,MCUCR_ISC01);
		CLR_BIT(MCUCR,MCUCR_ISC00);

#elif   INT0_SENSE == RISING_EDGE
		SET_BIT(MCUCR,MCUCR_ISC01);
		SET_BIT(MCUCR,MCUCR_ISC00);

#else  #error "wrong"

#endif




	/*Peripheral interrupt enable for INT0*/

#if INT0_INITIAL_STATE == ENABLE
		SET_BIT(GICR,GICR_INT0);

#elif INT0_INITIAL_STATE == DISABLE
		CLR_BIT(GICR,GICR_INT0);

#else  #error "ERROR"

#endif

}
	
	

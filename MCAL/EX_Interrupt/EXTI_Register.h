/******************************************************************/
/******************************************************************/
/*******************    Eng:abdelrahman ELsayed   *****************/
/*******************    Layer:MCAL                ******************/
/*******************    SEC: EXTI                 ******************/
/*******************    version:1.00             ******************/
/******************************************************************/
/******************************************************************/


#ifndef EXTI_REGISTER_H_
#define EXTI_REGISTER_H_

#define SREG		*((volatile u8*)0x5F)
#define SREG_I		7

#define GICR	 		*((volatile u8*)0x5B)
#define GICR_INT1		7
#define GICR_INT0		6
#define GICR_INT2		5

#define GIFR		 	*((volatile u8*)0x5A)

#define MCUCR		 	*((volatile u8*)0x55)
#define MCUCR_ISC11		3
#define MCUCR_ISC10		2
#define MCUCR_ISC01		1
#define MCUCR_ISC00		0

#define MCUCSR	 		*((volatile u8*)0x54)
#define MCUCSR_INT2		6


#define ENABLE   0
#define DISABLE  1


#endif

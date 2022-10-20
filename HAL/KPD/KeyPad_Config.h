/******************************************************************/
/******************************************************************/
/*******************    Eng:abdelrahman ELsayed   *****************/
/*******************    Layer:HAL                ******************/
/*******************    SEC: KeyPad              ******************/
/*******************    version:1.00             ******************/
/******************************************************************/
/******************************************************************/

#ifndef KeyPad_Config_H_
#define KeyPad_Config_H_


#define KPD_NoPressed_Key  0xff
#define KPD_ARR    {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}}

#define KPD_PORT  DIO_u8PORTD

#define KPD_COLOUM0_PIN   DIO_u8PIN0
#define KPD_COLOUM1_PIN   DIO_u8PIN1
#define KPD_COLOUM2_PIN   DIO_u8PIN2
#define KPD_COLOUM3_PIN   DIO_u8PIN3

#define KPD_ROW0_PIN      DIO_u8PIN4
#define KPD_ROW1_PIN      DIO_u8PIN5
#define KPD_ROW2_PIN      DIO_u8PIN6
#define KPD_ROW3_PIN      DIO_u8PIN7



#endif

/******************************************************************/
/******************************************************************/
/*******************    Eng/abdelrahman helaly  *******************/
/*******************    Layer:MCAL              *******************/
/*******************    SEC: DIO                *******************/
/*******************    version:1.00            *******************/
/******************************************************************/
/******************************************************************/

#ifndef DIO_interface_H_
#define DIO_interface_H_

#define DIO_u8PIN_High              1
#define DIO_u8PIN_Low               0


#define DIO_u8PORT_High             0xff
#define DIO_u8PORT_Low              0x00


#define DIO_u8PIN_OUTPUT              1
#define DIO_u8PIN_INPUT               0

#define DIO_u8PORT_OUTPUT             0xff
#define DIO_u8PORT_INPUT              0x00



#define DIO_u8PORTA                   0
#define DIO_u8PORTB                   1
#define DIO_u8PORTC                   2
#define DIO_u8PORTD                   3

#define DIO_u8PIN0                    0
#define DIO_u8PIN1                    1
#define DIO_u8PIN2                    2
#define DIO_u8PIN3                    3
#define DIO_u8PIN4                    4
#define DIO_u8PIN5                    5
#define DIO_u8PIN6                    6
#define DIO_u8PIN7                    7

SSD_t Set_number(u8 number,SSD_t* ssd);




u8 DIO_u8SetPinvalue(u8 Copy_u8port,u8 Copy_u8pin,u8 Copy_u8value);

u8 DIO_u8setportvalue(u8 Copy_u8port,u8 Copy_u8value);

u8 DIO_u8GetpinValue(u8 Copy_u8port,u8 Copy_u8pin,u8* Copy_pu8value);

#define num0   0b00111111
#define num1   0b00000110
#define num2   0b01011011
#define num3   0b01001111
#define num4   0b01100110
#define num5   0b01101101
#define num6   0b01111101
#define num7   0b00000111
#define num8   0b01111111
#define num9   0b01101111

#define Anode  1
#define Cathod  0
#endif 







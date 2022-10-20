#include "STD.h"
#include "bit.h"

#include "DIO_interface.h"
#include "LCD_Interface.h"
#include "LCD_Config.h"
#include <util/delay.h>



#define lcd_Clear           0x01          /* replace all characters with ASCII 'space'                       */
#define lcd_Home            0x02          /* return cursor to first position on first line                   */
#define lcd_EntryMode       0x06          // shift cursor from left to right on read/write
#define lcd_DisplayOff      0x08          // turn display off
#define lcd_DisplayOn       0x0C          // display on, cursor off, don't blink character
#define lcd_FunctionReset   0x30          // reset the LCD
#define lcd_FunctionSet8bit 0x38          // 8-bit data, 2-line display, 5 x 7 font
#define lcd_SetCursor       0x80          // set cursor position




void CLCD_VoidInti(void)
{

	/* Delay 30ms to ensure the initialization of the LCD driver */
	_delay_ms(30);

	/* Return Home  */
	CLCD_vidSendCommand(lcd_Home);
	_delay_ms(15);

	/* Function Set  */
	CLCD_vidSendCommand(lcd_FunctionSet8bit);
	_delay_ms(1);

	/* Display ON OFF Control */
	CLCD_vidSendCommand(lcd_DisplayOn);
	_delay_ms(1);

	/* Clear Display */
	CLCD_vidSendCommand(lcd_Clear);
	_delay_ms(15);

	/* Entry Mode Set  */
	CLCD_vidSendCommand(lcd_EntryMode);
	_delay_ms(2);

}
void CLCD_vidSendCommand(u8 u8CmdCpy)
{
	/****SET RS TO LOW ***/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT , CLCD_RS_PIN ,DIO_u8PIN_Low);
	/****SET RW TO LOW ***/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_Low) ;
	/*****SET DATA*****/
	DIO_voidsetportvalue(CLCD_DATA_PORT,u8CmdCpy);

	/*****ENABLE*****/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_Low);

	_delay_ms(2) ;
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_Low);


}
void CLCD_VoidWriteCharctr(u8 copy_VoidData)
{

	/****SET RS AS HIGH***/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_u8PIN_High);

	/****SET RS AS LOW***/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_Low);

	/*****SET DATA*****/
	DIO_voidsetportvalue(CLCD_DATA_PORT,copy_VoidData);

	/*****ENABLE*****/
	DIO_voidSetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_High);
	_delay_ms(2);
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_Low);

}

void CLCD_SendString(const char* copy_pcstring)
{
	u8 Local_u8 =0 ;

	while(copy_pcstring[Local_u8] != '\0')
	{
		CLCD_SendString(copy_pcstring[Local_u8]);
        Local_u8 ++ ;
	}


}

void LCD_vidGotoxy(u8 X_Pos , u8 Y_pos)
{
if(X_Pos>0 && X_Pos<=16)
{
	switch(Y_pos)
	{

	case 1 : CLCD_VoidSendCommand(Y_pos);          break;
	case 2 : CLCD_VoidSendCommand(Y_pos + 0x40);         break;
	default:          break;
	}
}
}

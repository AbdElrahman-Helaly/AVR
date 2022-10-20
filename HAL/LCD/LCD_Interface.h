/***************************************************************************/
/***************************************************************************/
/*******************      eng/abdelrahman helaly        ********************/
/*******************       Layer:HAL                  **********************/
/*******************       Component : CLCD           **********************/
/*******************       SEC: DIO                      *******************/
/*******************       version:1.00                  *******************/
/***************************************************************************/
/***************************************************************************/

#ifndef CLCD_interFace_H_
#define CLCD_interFace_H_


void CLCD_VoidInti(void);
void CLCD_vidSendCommand(u8 u8CmdCpy);
void CLCD_VoidWriteCharctr(u8 copy_VoidData);
void CLCD_SendString(const char* copy_pcstring);
void LCD_vidGotoxy(u8 X_Pos , u8 Y_pos);


#endif

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

void CLCD_VoidSendCommand(u8 copy_VoidCommand);
void CLCD_VoidSendData(u8 copy_VoidData);

void CLCD_VoidInti(void);
 

void CLCD_SendString(const char* copy_pcstring);
void CLCD_voidGetx_y(u8 Copy_u8XPOS,u8 Copy_u8YPOS);
void CLCD_Write_SpciChar(u8* Copy_u8Pattern,u8 Copy_u8pattern_number,u8 Copy_u8XPOS,u8 Copy_u8YPOS);
void CLCD_u8NumberClear(u8 Copy_u8Number);
void CLCD_writeu32Number(u32 copy_number);
void Return_u8num(u8 x , u8 y);
#endif

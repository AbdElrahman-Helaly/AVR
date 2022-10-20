#include "bit.h"
#include "STD.h"
#include "DIO_interface.h"
#include "CLCD_interFace.h"
#include "CLCD_Config.h"
#include "util/delay.h"

void CLCD_VoidSendCommand(u8 copy_VoidCommand){
	/****RS=0***/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_u8PIN_Low);
	/****RW=0***/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_Low);
	/*****SET DATA*****/
	DIO_u8setportvalue(CLCD_DATA_PORT,copy_VoidCommand);
	/*****ENABLE*****/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_High);
	_delay_ms(2);
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_Low);



}
void CLCD_VoidSendData(u8 copy_VoidData){

   /****RS=1***/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_u8PIN_High);
	/****RW=0***/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_Low);
	/*****SET DATA*****/
	DIO_u8setportvalue(CLCD_DATA_PORT,copy_VoidData);
	/*****ENABLE*****/
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_High);
	_delay_ms(2);
	DIO_u8SetPinvalue(CLCD_CTRL_PORT,CLCD_EN_PIN,DIO_u8PIN_Low);

}

void CLCD_VoidInti(void){
_delay_ms(40);
/***Function set :2line ,,5*8F ******/
CLCD_VoidSendCommand(0b00111000);
/*****display*****/
CLCD_VoidSendCommand(0b00001100);
/*******display clear*****/
CLCD_VoidSendCommand(1);
}



void CLCD_SendString(const char* copy_pcstring){
u8 i=0;
		while(copy_pcstring[i] != '\0' ){
		CLCD_VoidSendData(copy_pcstring[i]);
		i++;
		}

}


void CLCD_voidGetx_y(u8 Copy_u8XPOS,u8 Copy_u8YPOS){
	u8 Local_u8Adddress;
	if(Copy_u8XPOS == 0){
		Local_u8Adddress= Copy_u8YPOS;
	}
	else if(Copy_u8XPOS == 1){
		Local_u8Adddress= Copy_u8YPOS + 0x40;

	}

	/*Set bit num7 to set DDRAM address command then send the command*/
CLCD_VoidSendCommand(Local_u8Adddress+128);

}


void CLCD_Write_SpciChar(u8* Copy_u8Pattern,u8 Copy_u8pattern_number,u8 Copy_u8XPOS,u8 Copy_u8YPOS){
	u8 Local_CGRAMAddress;
	/***calculate CGRAM ADDRESS*/
	Local_CGRAMAddress = Copy_u8pattern_number*8;
/**send CG ram address command with clear bit7 ,set pin6*/
	CLCD_VoidSendCommand(Local_CGRAMAddress+64);

	/* write inside CG ram*/
	for(u8 i=0 ; i<8 ;i++){
		CLCD_VoidSendData(Copy_u8Pattern[i]);
	}
	/*go to DDRAM TO Display the pattern*/
	 CLCD_voidGetx_y(Copy_u8XPOS,Copy_u8YPOS);
	 /* display the written pattern*/
	 CLCD_VoidSendData(Copy_u8pattern_number);
}

void CLCD_writeu32Number(u32 copy_number){
	u8 i;
	u8* Local_Num = &copy_number ;
	while(Local_Num[i] != '\0'){
		CLCD_VoidSendData(Local_Num[i]);
	i++;
	}

	}




void Return_u8num(u8 x , u8 y){


	if(x==0 && y<15){
		CLCD_voidGetx_y(0,y);
	}
	else{
		CLCD_voidGetx_y(1,y);

	}
}




















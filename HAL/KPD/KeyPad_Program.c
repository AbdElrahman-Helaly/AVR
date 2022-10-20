/******************************************************************/
/******************************************************************/
/*******************    Eng:abdelrahman ELsayed   *****************/
/*******************    Layer:HAL                ******************/
/*******************    SEC: KeyPad              ******************/
/*******************    version:1.00             ******************/
/******************************************************************/
/******************************************************************/

#include "STD.h"
#include "DIO_interface.h"
#include "KeyPad_Config.h"
#include "KeyPad_Private.h"
#include "KeyPad_interface.h"


u8 KPD_u8PressedKeey(void){
	/**static to no save on stack on memory*/
		u8 Local_u8PressedKey=KPD_NoPressed_Key,
			Local_u8Columindex,
			Local_u8Rowindex,
			Local_PinState;

	static	u8 Localu8KPDARR[Colum_Num][Row_Num] = KPD_ARR;

	static	u8 Local_u8KPDColumARR[Colum_Num]={
			KPD_COLOUM0_PIN,
			KPD_COLOUM1_PIN ,
			KPD_COLOUM2_PIN ,
			KPD_COLOUM3_PIN
	};

	static  u8 Local_u8KPDROWARR[Row_Num]=
	{
			KPD_ROW0_PIN ,
			KPD_ROW1_PIN ,
			KPD_ROW2_PIN ,
			KPD_ROW3_PIN
	};

	for(Local_u8Columindex=0 ; Local_u8Columindex <Colum_Num ; Local_u8Columindex++){

		/*ACTIVE CURRENT COLUMN*/
		DIO_u8SetPinvalue(KPD_PORT,Local_u8KPDColumARR[Local_u8Columindex],DIO_u8PIN_Low);

		for(Local_u8Rowindex=0;Local_u8Rowindex < Row_Num; Local_u8Rowindex++){

			/*READ THE CURRENT LOW*/
			DIO_u8GetpinValue(KPD_PORT,Local_u8KPDROWARR[Local_u8Rowindex],&Local_PinState);


			/*CHECK THE PIN IS PRESSED*/
			if(DIO_u8PIN_Low == Local_PinState){
				Local_u8PressedKey = Localu8KPDARR[Local_u8Rowindex][Local_u8Columindex];

				/*"polling"while you pressed the key*/
				while(DIO_u8PIN_Low == Local_PinState)
				{
					DIO_u8GetpinValue(KPD_PORT,Local_u8KPDROWARR[Local_u8Rowindex],&Local_PinState);
				}

				return Local_u8PressedKey;
			}
		}

		/*DEACTIVATE COLUMN*/
		DIO_u8SetPinvalue(KPD_PORT,Local_u8KPDColumARR[Local_u8Columindex],DIO_u8PIN_High);

	}
	return Local_u8PressedKey;
}

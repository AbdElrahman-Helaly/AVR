/***********************************************************************/
/***********************************************************************/
/*******************    Eng    : abdelrahman helaly  *******************/
/*******************    Layer  : MCAL                *******************/
/*******************    SwC    : ADC                 *******************/
/*******************    version: 1.00                *******************/
/***********************************************************************/
/***********************************************************************/


#ifndef ADC_REGISTER_H_
#define ADC_REGISTER_H_

#define ADC_u8_ADC_CHANNEL_0       0
#define ADC_u8_ADC_CHANNEL_1       1
#define ADC_u8_ADC_CHANNEL_2       2
#define ADC_u8_ADC_CHANNEL_3       3
#define ADC_u8_ADC_CHANNEL_4       4
#define ADC_u8_ADC_CHANNEL_5       5
#define ADC_u8_ADC_CHANNEL_6       6
#define ADC_u8_ADC_CHANNEL_7       7




void ADC_voidInti(void);
u16 ADC_u8GetChannelReading(u8 copy_u8Channel);



#endif

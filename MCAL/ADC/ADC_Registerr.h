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
 

#define  ADMUX_CHANNEL_NUM_MASK  0b11100000
#define  ADMUX                   *((voiatile u8*(0x27))
#define  ADMUX_REFS1             7
#define  ADMUX_REFS0             6
#define  ADMUX_ADLAR             5

 
#define  ADCSRA                 *((voiatile u8*(0x26))
					            			           				       
#define  ADCH                   *((voiatile u8*(0x25))
					            					            
#define  ADCL                   *((voiatile u8*(0x24))
#define  ADC              *((volatile u16*)0x24)

 
#endif



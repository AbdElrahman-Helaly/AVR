/******************************************************************/
/******************************************************************/
/**********************    Eng/abdelrahman helaly  ****************/
/**********************    Layer:MCAL              ****************/
/**********************    SEC: PORT                ****************/
/**********************    version:1.00            ****************/
/******************************************************************/
/******************************************************************/

#ifndef PORT_private_H_
#define PORT_private_H_


#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)  CONC_Helper(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_Helper(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0


#define PORTA_DIR             CONC( PORTA_PIN7_DIR,PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR ,PORTA_PIN2_DIR,PORTA_PIN1_DIR ,PORTA_PIN0_DIR)
#define PORTB_DIR             CONC( PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR ,PORTB_PIN2_DIR,PORTB_PIN1_DIR ,PORTB_PIN0_DIR)
#define PORTC_DIR             CONC( PORTC_PIN7_DIR,PORTC_PIN6_DIR,PORTC_PIN5_DIR,PORTC_PIN4_DIR,PORTC_PIN3_DIR ,PORTC_PIN2_DIR,PORTC_PIN1_DIR ,PORTC_PIN0_DIR)
#define PORTD_DIR             CONC( PORTD_PIN7_DIR,PORTD_PIN6_DIR,PORTD_PIN5_DIR,PORTD_PIN4_DIR,PORTD_PIN3_DIR ,PORTD_PIN2_DIR,PORTD_PIN1_DIR ,PORTD_PIN0_DIR)
						 
						 
#define PORTA_IniValue        CONC( PORTA_PIN7_IniValue,PORTA_PIN6_IniValue,PORTA_PIN5_IniValue,PORTA_PIN4_IniValue,PORTA_PIN3_IniValue ,PORTA_PIN2_IniValue,PORTA_PIN1_IniValue,PORTA_PIN0_IniValue)
#define PORTB_IniValue        CONC( PORTB_PIN7_IniValue,PORTB_PIN6_IniValue,PORTB_PIN5_IniValue,PORTB_PIN4_IniValue,PORTB_PIN3_IniValue ,PORTB_PIN2_IniValue,PORTB_PIN1_IniValue,PORTB_PIN0_IniValue)
#define PORTC_IniValue        CONC( PORTC_PIN7_IniValue,PORTC_PIN6_IniValue,PORTC_PIN5_IniValue,PORTC_PIN4_IniValue,PORTC_PIN3_IniValue ,PORTC_PIN2_IniValue,PORTC_PIN1_IniValue,PORTC_PIN0_IniValue)
#define PORTD_IniValue        CONC( PORTD_PIN7_IniValue,PORTD_PIN6_IniValue,PORTD_PIN5_IniValue,PORTD_PIN4_IniValue,PORTD_PIN3_IniValue ,PORTD_PIN2_IniValue,PORTD_PIN1_IniValue,PORTD_PIN0_IniValue)
						 
#endif

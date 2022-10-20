/********************		Author: ABDELRAHMAN ELSAYED		 ***************/
/********************		Layer: MCAL				         ***************/
/********************		SWC  : SPI				         ***************/
/********************		Version: 1.00			         ***************/
/***************************************************************************/
/***************************************************************************/
/***************************************************************************/

#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

/* CONFIG SPI MODE
   OPTION : SPI_U8_MASTER
            SPI_U8_SLAVE   */   

#define  SPI_U8_SELECT_MODE  SPI_U8_MASTER


/* Config for Interrupt enable or disable */
/* Select option from : SPI_u8_INT_ENABLE
						SPI_u8_INT_DISABLE */

#define SPI_u8_INT_STATE   SPI_u8_INT_DISABLE
/*
Select Options :
SPI_u8_MSB
SPI_u8_LSB */
#define SPI_u8_DATA_ORDER   SPI_u8_MSB
/*
Config polarity ,Options :
SPI_u8_RAISING_EDGE
SPI_u8_FALLING_EDGE
*/  
#define SPI_u8_CLK_POL    SPI_u8_RAISING_EDGE
/*Config CLK Phase 
Options : SPI_u8_SAMPLE
          SPI_u8_SETUP */    
#define SPI_u8_CLK_PHASE   SPI_u8_SAMPLE

/* Config Master Clk */
/* Options : SPI_CLK_OVER_4
             SPI_CLK_OVER_16
             SPI_CLK_OVER_64
             SPI_CLK_OVER_128
             SPI_HCLK_OVER_2
             SPI_HCLK_OVER_8
             SPI_HCLK_OVER_32
             SPI_HCLK_OVER_64 */

#define SPI_u8_CLK_RATE    SPI_CLK_OVER_4
#define SPI_u8_CLK_RATE    SPI_CLK_OVER_16

/* Config for The Timeout */

#define SPI_u16_TIMEOUT   50000

 

#endif

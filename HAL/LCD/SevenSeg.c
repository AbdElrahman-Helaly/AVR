/*
 * SevenSeg.c
 *
 *  Created on: Jul 30, 2022
 *      Author: Abdo Helaly
 */
#include "bit.h"
#include "STD.h"
#include "SevenSeg.h"

u8 SevenSegment( u8 Led_Num ){

	const u8 arr[]={

			0b1011111,
			0b0000110,
			0b0111011,
			0b0101111,
			0b1100110,
			0b1101101,
			0b1111101,
			0b0000111,
			0b1111111,
			0b1101111
	};

	return arr[ Led_Num ];
}




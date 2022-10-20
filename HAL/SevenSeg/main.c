#include "STD.h"
#include "bit.h"
#include "DIO_interface.h"
#include "SevenSeg.h"
#include <util/delay.h>


int main(void)
{

u8 Local_count = 9;





while(1)
{
	DIO_voidsetportDirection(DIO_u8PORTA , DIO_u8PORT_High);

	DIO_voidsetportvalue(DIO_u8PORTA , SevenSegment(Local_count--));


}




return 0;
}

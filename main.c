#include"../MCAL/DIO/DIO.h"
#include<avr/delay.h>
#include"../HAL/7_SEG/7_SEG.h"


void main()
{
	//uint8 i;
	SEVENSEG_voidInit();

	 SEVENSEG_voidWriteNumberOnOneSevenSeg(0,9,1000);


}

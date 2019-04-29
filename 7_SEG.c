
#include"7_SEG.h"
#include"7_SEG_CONFIG.h"
#include"../../MCAL/DIO/DIO.h"
#include<avr/delay.h>

uint8 SEVEN_seg[10]={0X40,0X79,0X24,0X30,0X19,0X12,0X02,0X38,0X00,0X10};

void SEVENSEG_voidInit(void)
{

#if    SEVENSEG_MODE_Init   ==  SEVENSEG0_ONLY

//SET PORT AS O/P FOR DISPLAY THE NUMBER ON SEVEN SEGMENT  ZERO
DIO_voidSetPortDirection(SEVENSEG0_PORT,0XFF);
//SET PIN AS O/P FOR THE POWER OF  THE SEVEN SEGMENT ZERO
DIO_voidSetPinDirection(SEVENSEG0_POWER_PORT,SEVENSEG0_POWER_PIN,OUTPUT);

DIO_voidSetPinValue(SEVENSEG0_POWER_PORT,SEVENSEG0_POWER_PIN,HIGH);

#elif    SEVENSEG_MODE_Init   ==   SEVENSEG1_ONLY

//SET PORT AS O/P FOR DISPLAY THE NUMBER ON SEVEN SEGMENT ONE
DIO_voidSetPortDirection(SEVENSEG1_PORT,0XFF);
//SET PIN AS O/P FOR THE POWER OF  THE SEVEN SEGMENT ONE
DIO_voidSetPinDirection(SEVENSEG1_POWER_PORT,SEVENSEG1_POWER_PIN,OUTPUT);

DIO_voidSetPinValue(SEVENSEG1_POWER_PORT,SEVENSEG1_POWER_PIN,HIGH);

#elif    SEVENSEG_MODE_Init    == SEVENSEG1_0


//SET PORT AS O/P FOR DISPLAY THE NUMBER ON SEVEN SEGMENT  ZERO
DIO_voidSetPortDirection(SEVENSEG0_PORT,0XFF);
//SET PIN AS O/P FOR THE POWER OF  THE SEVEN SEGMENT ZERO
DIO_voidSetPinDirection(SEVENSEG0_POWER_PORT,SEVENSEG0_POWER_PIN,OUTPUT);


//SET PORT AS O/P FOR DISPLAY THE NUMBER ON SEVEN SEGMENT ONE
DIO_voidSetPortDirection(SEVENSEG1_PORT,0XFF);
//SET PIN AS O/P FOR THE POWER OF  THE SEVEN SEGMENT ONE
DIO_voidSetPinDirection(SEVENSEG1_POWER_PORT,SEVENSEG1_POWER_PIN,OUTPUT);

DIO_voidSetPinValue(SEVENSEG0_POWER_PORT,SEVENSEG0_POWER_PIN,HIGH);
DIO_voidSetPinValue(SEVENSEG1_POWER_PORT,SEVENSEG1_POWER_PIN,HIGH);

#endif
}



void SEVENSEG_voidWriteNumberOnOneSevenSeg(uint8 from_number,uint8 to_number,uint8 delay)
{

uint8 i;
#if  SEVENSEG_MODE_Write_from_to_func == SEVENSEG0_ONLY

	for(i=from_number;i<=to_number;i++)
	{
		DIO_voidSetPortValue(SEVENSEG0_PORT ,SEVEN_seg[i]);
		_delay_ms(delay);
	}
#elif    SEVENSEG_MODE_Write_from_to_func ==  SEVENSEG1_ONLY

	for(i=from_number;i<=to_number;i++)
		{
			DIO_voidSetPortValue(SEVENSEG1_PORT ,SEVEN_seg[i]);
			_delay_ms(delay);
		}
#endif
}

void SEVENSEG_voidWriteNumberOnTwoSevenSeg(uint8 from_number,uint8 to_number,uint8 delay)
{

	uint8 i;
    uint8  seg0,seg1;

		for(i=from_number;i<=to_number;i++)
		{
          seg0=i%10;
         seg1=i/10;

			DIO_voidSetPortValue(SEVENSEG0_PORT ,SEVEN_seg[seg0]);
			DIO_voidSetPortValue( SEVENSEG1_PORT,SEVEN_seg[seg1]);

			_delay_ms(delay);
		}


}


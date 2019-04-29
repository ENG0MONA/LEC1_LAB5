
#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_
#include"../../LIB/STD_TYPES.h"
typedef enum
{
	PORTA_ID,
	PORTB_ID,
	PORTC_ID,
	PORTD_ID

}PORT_NO_TYPE;

typedef enum
{
	LOW,
	HIGH

}VALUE_TYPE;


typedef enum
{
	INPUT,
	OUTPUT
}DIRECTION_TYPE;


typedef enum
{
	PIN0_ID,
	PIN1_ID,
	PIN2_ID,
	PIN3_ID,
	PIN4_ID,
	PIN5_ID,
	PIN6_ID,
	PIN7_ID

}PIN_NO_TYPE;


void DIO_voidSetPortValue(PORT_NO_TYPE port_no,uint8 port_value);
void DIO_voidSetPinValue(PORT_NO_TYPE port_no ,PIN_NO_TYPE pin_number,VALUE_TYPE pin_value);


void DIO_voidSetPortDirection(PORT_NO_TYPE port_no ,uint8 port_direction);
void DIO_voidSetPinDirection(PORT_NO_TYPE port_no ,PIN_NO_TYPE pin_number,DIRECTION_TYPE pin_direction);


uint8 DIO_uint8GetPortValue(PORT_NO_TYPE port_no);
 VALUE_TYPE DIO_VALUE_TYPEGetPinValue(PORT_NO_TYPE port_no ,PIN_NO_TYPE  pin_number);



#endif /* MCAL_DIO_DIO_H_ */

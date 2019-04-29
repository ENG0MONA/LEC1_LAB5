//we include dio.h because we will use the enum which done
//in this file
#include"DIO.h"
//we include registers.h because we use port and pin and ddr
#include"../../LIB/REGISTERS.h"
//we include bitmath.h because  we use set_bit / clr_bit
#include"../../LIB/BIT_MATH.h"
void DIO_voidSetPortValue(PORT_NO_TYPE port_no ,uint8 port_value)
{

	switch(port_no)
	{
	case PORTA_ID:PORTA=port_value;
		          break;
	case PORTB_ID:PORTB=port_value;
			          break;

	case PORTC_ID:PORTC=port_value;
			          break;

	case PORTD_ID:PORTD=port_value;
			          break;
	}
}
void DIO_voidSetPinValue(PORT_NO_TYPE port_no ,PIN_NO_TYPE bit_number,VALUE_TYPE pin_value)
{
	if(pin_value==HIGH)
	{
		switch(port_no)
		{
		    case PORTA_ID: SET_BIT(PORTA,bit_number);
		                   break;
		    case PORTB_ID: SET_BIT(PORTB,bit_number);
				           break;
		    case PORTC_ID: SET_BIT(PORTC,bit_number);
				           break;
		     case PORTD_ID: SET_BIT(PORTD,bit_number);
				            break;
		}
	}

	else if(pin_value==LOW)
	{
		switch(port_no)
		{
		case PORTA_ID: CLR_BIT(PORTA,bit_number);
		               break;
		case PORTB_ID: CLR_BIT(PORTB,bit_number);
				       break;
		case PORTC_ID: CLR_BIT(PORTC,bit_number);
				       break;
		case PORTD_ID: CLR_BIT(PORTD,bit_number);
				       break;
		}
	}

}

void DIO_voidSetPortDirection(PORT_NO_TYPE port_no ,uint8 port_direction)
{
	switch(port_no)
		{
		case PORTA_ID:DDRA=port_direction;
			          break;
		case PORTB_ID:DDRB=port_direction;
				          break;

		case PORTC_ID:DDRC=port_direction;
				          break;

		case PORTD_ID:DDRD=port_direction;
				          break;
		}
}
void DIO_voidSetPinDirection(PORT_NO_TYPE port_no ,PIN_NO_TYPE bit_number,DIRECTION_TYPE pin_direction)
{
	if(pin_direction==OUTPUT)
		{
			switch(port_no)
			{
			    case PORTA_ID: SET_BIT(DDRA,bit_number);
			                   break;
			    case PORTB_ID: SET_BIT(DDRB,bit_number);
					           break;
			    case PORTC_ID: SET_BIT(DDRC,bit_number);
					           break;
			     case PORTD_ID: SET_BIT(DDRD,bit_number);
					            break;
			}
		}

		else if(pin_direction==INPUT)
		{
			switch(port_no)
			{
			case PORTA_ID: CLR_BIT(DDRA,bit_number);
			               break;
			case PORTB_ID: CLR_BIT(DDRB,bit_number);
					       break;
			case PORTC_ID: CLR_BIT(DDRC,bit_number);
					       break;
			case PORTD_ID: CLR_BIT(DDRD,bit_number);
					       break;
			}
		}
}


uint8 DIO_uint8GetPortValue(PORT_NO_TYPE port_no )
{
	uint8 ret_val=0;
     switch(port_no)
       {
       case PORTA_ID:ret_val=PINA;
		          break;
       case PORTB_ID:ret_val=PINB;
			          break;

	   case PORTC_ID:ret_val=PINC;
			          break;

	   case PORTD_ID:ret_val=PIND;
			          break;
	}
     return  ret_val;
}

VALUE_TYPE DIO_VALUE_TYPEGetPinValue(PORT_NO_TYPE port_no ,PIN_NO_TYPE  pin_number)
{

	VALUE_TYPE ret_val=0;
	     switch(port_no)
	       {
	       case PORTA_ID:ret_val=GET_BIT(PINA,pin_number);
			          break;
	       case PORTB_ID:ret_val=GET_BIT(PINB,pin_number);
				          break;

		   case PORTC_ID:ret_val=GET_BIT(PINC,pin_number);
				          break;

		   case PORTD_ID:ret_val=GET_BIT(PIND,pin_number);
				          break;
		}
	     return ret_val;
}

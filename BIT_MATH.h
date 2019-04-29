/*
 * BIT_MATH.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: toshipa
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

// for change the bit value zero become one and vice versa
#define SET_BIT(var,bit_number)       (var|=(1<<bit_number))
#define CLR_BIT(var,bit_number)       (var&=(~(1<<bit_number)))
#define TOG_BIT(var,bit_number)       (var^=(1<<bit_number))
#define GET_BIT(var,bit_number)       ((var>>bit_number)&1)

// for change the lower bits value zero become one and vice versa
//from 0 to 3
#define SET_NippleL(var)       (var|=0X0F)
#define CLR_NippleL(var)       (var&=0XF0)
#define TOG_NippleL(var)       (var^=0X0F)
#define GET_NippleL(var)       ((var&0x0F))

// for change the higher bits value zero become one and vice versa
//from 4 to 7
#define SET_NippleH(var)       (var|=0XF0)
#define CLR_NippleH(var)       (var&=0X0F)
#define TOG_NippleH(var)       (var^=0XF0)
#define GET_NippleH(var)       ((var&0xF0)>>4)



#endif /* LIB_BIT_MATH_H_ */

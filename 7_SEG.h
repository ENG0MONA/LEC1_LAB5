/*
 * 7_SEG.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: toshipa
 */

#ifndef HAL_7_SEG_7_SEG_H_
#define HAL_7_SEG_7_SEG_H_


#include"../../LIB/STD_TYPES.h"





void SEVENSEG_voidInit(void);

void SEVENSEG_voidWriteNumberOnOneSevenSeg(uint8 from_number,uint8 to_number,uint8 delay);

void SEVENSEG_voidWriteNumberOnTwoSevenSeg(uint8 from_number,uint8 to_number,uint8 delay);

//void SEVENSEG_voidWriteNumberInTwoSEG(uint8 number);

//void SEVENSEG_voidWriteNumberInTwo7SegInTheSamePort(uint8 i);
#endif /* HAL_7_SEG_7_SEG_H_ */

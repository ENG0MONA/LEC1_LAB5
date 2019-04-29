/*
 * STD_TYPES.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: toshipa
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

//typedef the old definition   the new definition ;
// this  way

//1byte reserve for char if unsigned or signed
typedef unsigned char uint8;
typedef signed char sint8;

//2bytes reserve for short integer if  unsigned or signed
typedef unsigned short int uint16;
typedef signed short int  sint16;

//4bytes reserve for  integer if unsigned or signed
typedef unsigned long int uint32;
typedef signed long  int  sint32;

//4bytes reserve for float and you must not declare it as signed or
//unsigned or short or long  but only float
typedef  float  float32;

//8bytes reserve for double and you must not declare it as signed or
//unsigned or short or long but only double
typedef  double  float64;


//................................................................


//pointers to any type of the types  we are declare up

//according to the compiler the size of pointer is constant for
//any type this pointer is refer to it is 8 bytes i know it by using
//size  of operator

typedef unsigned char* puint8;
typedef signed char* psint8;


typedef unsigned short int* puint16;
typedef signed short int*  psint16;


typedef unsigned long int* puint32;
typedef signed long  int*  psint32;


typedef  float*  pfloat32;


typedef  double*  pfloat64;





#endif /* LIB_STD_TYPES_H_ */

/*
 * 7_SEG_CONFIG.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: toshipa
 */

#ifndef HAL_7_SEG_7_SEG_CONFIG_H_
#define HAL_7_SEG_7_SEG_CONFIG_H_
#define PORT_ID    PORTC_ID
//COMMON ANODE 7SEG
//use p as pin
 /*                              p7  p6  p5  p4  p3  p2  p1  p0
 * NUM   value in HEX            h   g   f   e   d   c   b   a
 * 0        0x40                 0   1   0   0   0   0   0   0
 * 1        0x79                 0   1   1   1   1   0   0   1
 * 2        0x24                 0   0   1   0   0   1   0   0
 * 3        0x30                 0   0   1   1   0   0   0   0
 * 4        0x19                 0   0   0   1   1   0   0   1
 * 5        0x12                 0   0   0   1   0   0   1   0
 * 6        0x02                 0   0   0   0   0   0   1   0
 * 7        0x38                 0   0   1   1   1   0   0   0
 * 8        0x00                 0   0   0   0   0   0   0   0
 * 9        0x10                 0   0   0   1   0   0   0   0
 *
 */
//WE WILL USE ARRAY TO CONTAIN ALL THIS VALUES
//THE ARRAY SIZE  WILL BE  10 BECAUSE IT CONTAIN 10 VALUES
//THE ARRAY OF CHAR BECAUSE  THERE ONLY 8 BITS  OR  1BYTE
//SO WE CAN USE ARRAY OF CHAR

#define SEVENSEG_MODE_Init    SEVENSEG0_ONLY

#define SEVENSEG_MODE_Write_from_to_func     SEVENSEG0_ONLY


#define   SEVENSEG0_ONLY    0
#define   SEVENSEG1_ONLY    1
#define   SEVENSEG1_0       2

#define SEVENSEG0_PORT   PORTC_ID
#define SEVENSEG1_PORT   PORTD_ID

#define SEVENSEG0_POWER_PIN  PIN0_ID
#define SEVENSEG1_POWER_PIN  PIN1_ID

#define SEVENSEG0_POWER_PORT  PORTA_ID
#define SEVENSEG1_POWER_PORT  PORTA_ID
#endif /* HAL_7_SEG_7_SEG_CONFIG_H_ */

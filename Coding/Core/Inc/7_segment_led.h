/*
 * 7_segment_led.h
 *
 *  Created on: 29 thg 9, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_7_SEGMENT_LED_H_
#define INC_7_SEGMENT_LED_H_

#include "main.h"

void resetAllDigits();
void setDigit(int digitSerial);
void setNum2Digit(int a, int b, int c, int d, int e, int f, int g);
void display7SEG(int num);
void update7SEG(int index);
void init_exercise3();
void exercise3_run();

#endif /* INC_7_SEGMENT_LED_H_ */

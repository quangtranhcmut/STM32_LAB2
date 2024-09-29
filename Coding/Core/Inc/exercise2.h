/*
 * exercise2.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_EXERCISE2_H_
#define INC_EXERCISE2_H_

#include "main.h"
#include "timer.h"
#include "7_segment_led.h"

extern int num_e2;
extern int idx_e2;

void init_exercise2();
void display7SegLed();
void displayDot();
void exercise2_run();

#endif /* INC_EXERCISE2_H_ */

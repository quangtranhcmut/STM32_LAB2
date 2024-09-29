/*
 * timer.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
int timer_flag[10];
int timer_counter[10];

void setTimer(int index, int counter);
void timerRun();
void timer_isr();

#endif /* INC_TIMER_H_ */

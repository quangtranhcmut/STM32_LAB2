/*
 * exercise1.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Thảo Quảng
 */

#include "exercise1.h"

void init_exercise1(){
	setTimer(0, 50);
	resetAllDigits();
}

int num = 1;
int idx = 0;
void exercise1_run(){
	setDigit(idx);
	display7SEG(num);
	if (timer_flag[0] == 1){
		setTimer(0, 50);
		switch (idx) {
			case 0: {
				idx = 1;
				num = 2;
				break;
			}
			case 1: {
				idx = 0;
				num = 1;
				break;
			}
			default: {
				break;
			}
		}
	}
}

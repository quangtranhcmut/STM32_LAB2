/*
 * exercise2.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Thảo Quảng
 */

#include "exercise2.h"

void init_exercise2(){
	setTimer(0, 50);
	setTimer(1, 100);
	resetAllDigits();
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, 0);
}

int idx_e2 = 0;
int num_e2 = 1;
void display7SegLed(){
	setDigit(idx_e2);
	display7SEG(num_e2);
	if (timer_flag[0] == 1){
		setTimer(0, 50);
		switch (idx_e2) {
			case 0: {
				idx_e2 = 1;
				num_e2 = 2;
				break;
			}
			case 1: {
				idx_e2 = 2;
				num_e2 = 3;
				break;
			}
			case 2: {
				idx_e2 = 3;
				num_e2 = 0;
				break;
			}
			case 3: {
				idx_e2 = 0;
				num_e2 = 1;
				break;
			}
			default: {
				break;
			}
		}
	}
}
void displayDot(){
	if (timer_flag[1] == 1) {
		setTimer(1, 100);
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
	}
}
void exercise2_run(){
	display7SegLed();
	displayDot();
}

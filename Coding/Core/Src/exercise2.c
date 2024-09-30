/*
 * exercise2.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Thảo Quảng
 */

#include "exercise2.h"

void init_exercise2(){
	setTimer(0, 0);
	setTimer(1, 0);
	resetAllDigits();
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, 1);
}

int idx_e2 = 0;
int num_e2[4] = {1, 2, 3, 0};
void display7SegLed(){
	if (timer_flag[0] == 1){
		setTimer(0, 50);
		setDigit(idx_e2);
		switch(idx_e2){
			case 0: {
				display7SEG(num_e2[0]);
				break;
			}
			case 1: {
				display7SEG(num_e2[1]);
				break;
			}
			case 2: {
				display7SEG(num_e2[2]);
				break;
			}
			case 3: {
				display7SEG(num_e2[3]);
				break;
			}
			default: {
				break;
			}
		}
		idx_e2++;
		if (idx_e2 >= 4) {
			idx_e2 = 0;
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

/*
 * exercise4.c
 *
 *  Created on: Sep 30, 2024
 *      Author: Thảo Quảng
 */

#include "exercise4.h"

void init_exercise4(){
	setTimer(0, 0);
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, 1);
}
void exercise4_run(){
	if(timer_flag[0] == 1){
		setTimer(0, 1);
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
	}
}

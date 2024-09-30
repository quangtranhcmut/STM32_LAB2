/*
 * matrix_led.c
 *
 *  Created on: Sep 30, 2024
 *      Author: Thảo Quảng
 */

#include "matrix_led.h"

void resetAllColumns(){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xE7, 0xC3, 0x81, 0x99, 0x81, 0x81, 0x99, 0x99};
void updateLEDMatrix(int index) {
	resetAllColumns();
    switch (index) {
        case 0: {
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
            break;
        }
        case 1: {
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
			break;
		}
        case 2: {
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
			break;
		}
        case 3: {
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
			break;
		}
        case 4: {
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
			break;
		}
        case 5: {
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
			break;
		}
        case 6: {
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
			break;
		}
        case 7: {
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
			break;
		}
        default: {
            break;
        }
    }

    HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, matrix_buffer[index] & 0x01);
    HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, matrix_buffer[index] & 0x02);
    HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, matrix_buffer[index] & 0x04);
    HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, matrix_buffer[index] & 0x08);
    HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, matrix_buffer[index] & 0x10);
    HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, matrix_buffer[index] & 0x20);
    HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, matrix_buffer[index] & 0x40);
    HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, matrix_buffer[index] & 0x80);
}

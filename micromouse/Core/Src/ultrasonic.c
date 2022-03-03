#include "ultrasonic.h"

int16_t distance_of_object_in_cm()
{
	risingEdgeInterrupt = 1;
	counter = 0;
	centimeters = 0;

	HAL_GPIO_WritePin(SONIC_TRIGGER_GPIO_Port, SONIC_TRIGGER_Pin, GPIO_PIN_SET);  // pull the TRIG pin HIGH
	HAL_Delay(10);
	HAL_GPIO_WritePin(SONIC_TRIGGER_GPIO_Port, SONIC_TRIGGER_Pin, GPIO_PIN_RESET);

	__HAL_TIM_ENABLE_IT(&htim5, TIM_IT_CC2);
	HAL_Delay(100);
	return centimeters;
}  // int16_t distance_of_object_in_cm()
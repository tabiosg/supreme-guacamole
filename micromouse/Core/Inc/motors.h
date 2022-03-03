#ifndef INC_MOTORS_H_
#define INC_MOTORS_H_

#include "stdint.h"
#include "main.h"

typedef enum
{
	Left_Motor, Right_Motor
} motor_side;

void set_motor_speed(motor_side side, int16_t speed400);

void stop_motors(motor_side side);

void stop_all_motors();

#endif /* INC_MOUSE_H_ */

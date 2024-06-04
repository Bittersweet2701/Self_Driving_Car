#include "Motor.h"

void MOTOR_Set_Speed(motor_dc_t * motor_p)
{
    switch (motor_p->timChannel)
    {
		case TIM_CHANNEL_1:
			if (motor_p->speed == STOP_SPEED)
			{

			}
			else
			{
				if (motor_p->speed == LOW_SPEED1)
				{

				}
				if (motor_p->speed == LOW_SPEED2)
				{

				}
				if (motor_p.speed == LOW_SPEED3)
				{

				}
			}
			break;
		case TIM_CHANNEL_2:
			break;
		case TIM_CHANNEL_3:
			break;
		case TIM_CHANNEL_4:
			break;
	}
}

void MOTOR_Init()
{

}

motor_dc_t * MOTOR_Create(TIM_HandleTypeDef * timer_p, uint32_t timChannel)
{

}

void MOTOR_Destroy(motor_dc_t *const motor_p)
{

}

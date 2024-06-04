#ifndef _DRIVER_MOTOR_
#define _DRIVER_MOTOR_

/*********************
 *      INCLUDES
 *********************/

#include <stdint.h>
// #include "stm32f4xx_hal.h"
// #include "stm32f4xx_hal_tim.h"
#include "main.h"

/**********************
 *      TYPEDEFS
 **********************/

struct motor_dc;
typedef struct motor_dc motor_dc_t;

typedef enum
{
    CLOCKWISE,
    COUNTER_CLOCKWISE
} direction_motor_t;

typedef enum
{
    STOP_SPEED,
    LOW_SPEED1,
    LOW_SPEED2,
    LOW_SPEED3
} speed_motor_t;

struct motor_dc
{
    direction_motor_t * direction
    TIM_HandleTypeDef * timer_p;
    speed_motor_dc_t speed;
    uint32_t timChannel;
    void (*set_speed)(motor_dc_t *const motor_p);
};

/**********************
 *     OPERATION
 **********************/

motor_dc_t * MOTOR_Create(TIM_HandleTypeDef * timer_p, uint32_t timChannel);
void MOTOR_Destroy(motor_dc_t *const motor_p);

#endif
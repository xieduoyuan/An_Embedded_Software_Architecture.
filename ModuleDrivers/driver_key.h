#ifndef __DRIVER_KEY_H
#define __DRIVER_KEY_H

#include "stm32f1xx_hal.h"

 
#define K1   HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)
#define K2   HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin)

 
extern uint8_t K1_Value(void);
extern uint8_t K2_Value(void);


#endif  

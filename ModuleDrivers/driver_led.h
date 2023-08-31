#ifndef __DRIVER_LED_H
#define __DRIVER_LED_H

#define BLUE_ON()       HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 0)
#define BLUE_OFF()      HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 1)  

extern void BlueOn(void);

 
extern void BlueOff(void);

 
extern void BlueShine(void);

 
extern void BlueShine_2(void);

#endif
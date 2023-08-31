#include <main.h>
#include <driver_led.h>


void BlueOn(void)
{
    HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 0);
}

 
void BlueOff(void)
{
    HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 1);
}
 
void BlueShine(void)
{
    BlueOn();
    HAL_Delay(500);
    BlueOff();
    HAL_Delay(500);
}

 
void BlueShine_2(void)
{
    HAL_GPIO_TogglePin(BLUE_GPIO_Port, BLUE_Pin);
}




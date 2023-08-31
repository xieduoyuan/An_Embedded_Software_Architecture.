#include <main.h>
#include <driver_key.h>

uint8_t K1_Value(void)
{
    if(K1 == 0)
    {
        HAL_Delay(100);
        if(K1 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}

uint8_t K2_Value(void)
{
    if(K2 == 0)
    {
        HAL_Delay(100);
        if(K2 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}
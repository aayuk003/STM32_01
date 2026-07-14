#include "main.h"

int main(void)
{
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);

        HAL_Delay(500);
    }
}
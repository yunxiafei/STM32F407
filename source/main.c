#include "stm32f4xx.h"


int main(void)
{
    static int8_t i = 0;
    SystemInit();

    while (1)
    {
        if( i < 100)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    
}

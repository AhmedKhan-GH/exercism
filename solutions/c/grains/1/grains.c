#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index)
{
    return pow(2, index-1);
}

uint64_t total(void)
{
    int i;
    int sum = 0;
    for(i = 1; i <= 64; ++i)
    {
        sum += square(i);
    }
    return sum;
}
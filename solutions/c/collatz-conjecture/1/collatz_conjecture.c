#include "collatz_conjecture.h"

int steps(int start)
{
    if(start < 1)
    {
        return -1;
    }
    
    int count = 0;
    int number = start;

    while (number > 1)
    {
        if(number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number *= 3;
            number += 1;
        }
            count++;
    }

    return count;
}
#include "eliuds_eggs.h"

int egg_count(int eggs)
{

    // count the number of 1 bits in the binary representation of a number
    // in this we just bit shift to the right and see if the last bit is 1
    int counter = 0;
    while(eggs != 0)
    {
        if(eggs & 1)
        {
            counter += 1;
        }
        eggs >>= 1;
    }

    return counter;
}
#include "leap.h"

bool leap_year(int year)
{
    bool four = year % 4 == 0;
    bool hundred = year % 100 == 0;
    bool four_hundred = year % 400 == 0; 

    //implicitly a leap year
    if(four_hundred)
    {
        return true;
    }

    //a divisible by hundred that is not divisible 
    //by four hundred since we already exited before

    if(hundred)
    {
        return false;
    }

    //divisible by four that is not divisible by hundred
    //since we already exited before
    if(four)
    {
        return true;
    }

    return false;
}
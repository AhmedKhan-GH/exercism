#include "darts.h"


uint8_t score(coordinate_t lp){
    //calculate the radius of the landing position
    double dist = sqrt(pow(lp.x, 2) + pow(lp.y, 2));
    if (dist > 10){
        return 0;
    }

    if(dist > 5)
    {
        return 1;
    }

    if(dist > 1)
    {
        return 5;
    }
    return 10;
}
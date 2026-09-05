#include "resistor_color.h"

// the array uses these name to number mappings to create an array that
// internally is just numbers in order, but we can now call by its name
resistor_band_t bands[]={ 
    BLACK,
    BROWN, 
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
};


// we pass in the color by name and then we return
// the associated color code 

int color_code(resistor_band_t color)
{
    return bands[color];
}

// we return the entire enumerated array
resistor_band_t* colors()
{
    return bands;
}
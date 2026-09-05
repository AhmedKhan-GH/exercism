#include "resistor_color_duo.h"

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

// the objective of this function, we receive an array of resistor_band_t
// with two values and then we have to return a mathematical computation
// of base 10 on those values
uint16_t color_code(resistor_band_t* duo)
{
    return 10*duo[0] + duo[1];
}


#include "space_age.h"

static int64_t earth_seconds = 31557600;
static float period[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};

float age(planet_t planet, int64_t seconds)
{
    if (planet < MERCURY || planet > NEPTUNE)
    {
        return -1.0f;
    }
   
    float earth_years = (float)seconds / earth_seconds;
    float planet_periods = earth_years / period[planet];
    return planet_periods;
    

    // seconds / (seconds / earth_years)
    // = earth_years

    // earth_years / (earth_years / period)
    // = period
        
    // given a planet and someone's age in seconds
    // give the planet specific age in their own 
    // relative years, the only reference we have
    // is that we have each planet's orbital period
    // in earth years 
}

//we have the planet_t enum so when we pass a planet
//into a certain array we can return the value of the
//respective orbital period for the calculation




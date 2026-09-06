#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

    
bool connection_check(pillar_men_sensor* sensor)
{
    if(sensor){
        return true;
    }    
    return false;
}

int activity_counter(pillar_men_sensor* sensor_array, int capacity)
{
    int counter = 0;
    for(int i = 0; i < capacity; i++)
    {
        counter += sensor_array[i].activity;
    }
    return counter;
}

bool alarm_control(pillar_men_sensor* sensor)
{
    if(!sensor)
    {
        return false;
    }
    //we are at a valid sensor

    if(sensor->activity <= 0)
    {
        return false;        
    }
    //valid sensor and activity is greater than 0

    return true;
    
}

bool uv_alarm(pillar_men_sensor* sensor)
{
    if(!sensor)
    {
        return false;
    }
    int heuristic = uv_light_heuristic(&sensor->data);
    if( heuristic <= sensor->activity)
    {
        return false;
    }
    return true;
}
    
}  // namespace speedywagon

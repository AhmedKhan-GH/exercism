#include "doctor_data.h"

namespace heaven{
    
    Vessel::Vessel(std::string name, int generation)
    {
        this->name = name;
        this->current_system = star_map::System::Sol;
        this->generation = generation;
        this->busters = 0;
    }
    Vessel::Vessel(std::string name, int generation, star_map::System system)
    {
        this->name = name;
        this->current_system = system;
        this->generation = generation;
        this->busters = 0;
    }
    
    Vessel Vessel::replicate(std::string name)
    {
        int new_generation = this->generation+1;
        return Vessel(name, new_generation, this->current_system); 
    }

    void Vessel::make_buster()
    {
        this->busters++;
    }
    bool Vessel::shoot_buster()
    {
        if(this->busters > 0)
        {
            this->busters--;
            return true;
        }
        return false;
    }
    
    star_map::System current_system;
    int generation;
    int busters;

    std::string get_older_bob(Vessel vessel_1, Vessel vessel_2)
    {
        if(vessel_1.generation < vessel_2.generation)
        {
            return vessel_1.name;
        }
        return vessel_2.name;
    }
    bool in_the_same_system(Vessel vessel_1, Vessel vessel_2)
    {
        if(vessel_1.current_system == vessel_2.current_system)
        {
            return true;
        }
        return false;
    }

}
    




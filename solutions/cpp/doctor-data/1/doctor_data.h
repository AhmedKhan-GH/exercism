#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>


namespace star_map
{
    enum class System
    {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven
{
    class Vessel
    {
    public:
        Vessel(std::string name, int number);
        Vessel(std::string name, int number, star_map::System system);
        Vessel replicate(std::string name);
        star_map::System current_system;
        int generation;
        int busters;
        void make_buster();
        bool shoot_buster();  
        std::string name;
    };
    std::string get_older_bob(Vessel, Vessel);
    bool in_the_same_system(Vessel, Vessel);

    
}


#endif
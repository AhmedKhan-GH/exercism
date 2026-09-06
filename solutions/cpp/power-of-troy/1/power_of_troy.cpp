#include "power_of_troy.h"

namespace troy {

    human::human() : possession(nullptr), own_power(nullptr), influenced_by(nullptr)
    {
        
    }

  
    
}  // namespace troy


      void give_new_artifact(troy::human& human, std::string artifact_name)
    {
        human.possession = std::make_unique<troy::artifact>(artifact_name);
    }
    void exchange_artifacts(std::unique_ptr<troy::artifact>& artifact1, std::unique_ptr<troy::artifact>& artifact2)
    {
        std::swap(artifact1, artifact2);
    }
    void manifest_power(troy::human& human, std::string power_name)
    {
        human.own_power = std::make_shared<troy::power>(power_name);
    }
    void use_power(troy::human& human1, troy::human& human2)
    {
        human2.influenced_by = human1.own_power;
    }
    int power_intensity(troy::human& human)
    {
        return human.own_power.use_count();
    }
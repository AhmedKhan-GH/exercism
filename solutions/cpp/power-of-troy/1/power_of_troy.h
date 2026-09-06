#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

class human
{
    public:
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;
    human();
};

}  // namespace troy


    void give_new_artifact(troy::human&, std::string);
    void exchange_artifacts(std::unique_ptr<troy::artifact>&, std::unique_ptr<troy::artifact>&);
    void manifest_power(troy::human&, std::string);
    void use_power(troy::human&, troy::human&);
    int power_intensity(troy::human&);


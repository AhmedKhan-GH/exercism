#include "lasagna_master.h"


namespace lasagna_master {

int preparationTime(const std::vector<std::string> layers, const int time){
    const int layer_count = layers.size();
    return layer_count * time;
}

int preparationTime(const std::vector<std::string> layers){
    const int layer_count = layers.size();
    const int time = 2;
    return layer_count * time;
}

lasagna_master::amount quantities(const std::vector<std::string> layers)
{
    int noodles_count = 0;
    int sauce_count = 0;
    for(const std::string& elem : layers)
    {
        if(elem == "sauce")
        {
            sauce_count++;   
        }
        if(elem == "noodles")
        {
            noodles_count++;   
        }
    }
    return lasagna_master::amount{noodles_count * 50, sauce_count * 0.2};
}

void addSecretIngredient(std::vector<std::string>& myList, const std::string secretIngredient)
{
    myList.back() = secretIngredient;
}
    
void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList)
{
    myList.back() = friendsList.back();
}

std::vector<double> scaleRecipe(const std::vector<double>& input, int portions)
{
    std::vector<double> result;
    for(const double& elem : input)
    {
        result.push_back(elem * portions/2);
    }
    return result;
}

// TODO: add your solution here

}  // namespace lasagna_master

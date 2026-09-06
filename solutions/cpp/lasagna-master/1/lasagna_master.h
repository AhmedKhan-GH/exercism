#pragma once

#ifndef LASAGNA_MASTER_H
#define LASAGNA_MASTER_H

#include <vector> 
#include <string> 

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string> layers, const int time);
int preparationTime(const std::vector<std::string> layers);
amount quantities(const std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string>& myList, const std::string secretIngredient);
void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList);
std::vector<double> scaleRecipe(const std::vector<double>& input, int portions);
    
    
}  // namespace lasagna_master

#endif
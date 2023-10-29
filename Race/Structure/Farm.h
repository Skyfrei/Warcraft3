#pragma once
#include "Structure.h"
#include <string>

using namespace Warcraft::Structures;

class Farm : public Structure
{
    public:
        Farm()
        {
            name = "Farm";
            description = "Gives 6 food.";
            health = 500;
            armor = 20;

            goldCold = 100;

            buildTime = 10;
        }
    public:
        std::string GetDescription() override {return description;}
        int GetHealth() override {return health;}


}
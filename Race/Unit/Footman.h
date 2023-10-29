#pragma once
#include "Unit.h"
#include <string>

namespace Warcraft::Units
{
    class Footman : public Unit
    {
        public:
            Footman()
            {
                name = "Footman";
                description = "A normal foot soldier.";
                health = 420;
                armor = 2;
                attack = 12.5;
                hpRegen = 0.25;

                goldCold = 135;
                foodCost = 2;

                attackCooldown = 1.35;
                buildTime = 20;


            }
        
            std::string GetDescription() override{};
            void RegenHealth() override {};
            void Attack() override {};
    };
}

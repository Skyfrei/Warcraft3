#pragma once

#include "Unit.h"
#include "../Spells/Spell.h"
#include <vector>

using namespace Warcraft::Spells;

namespace Warcraft::Units
{
    class Peasant : public Unit
    {
        public:
            Peasant()
            {
                name = "Peasant";
                description = "God damn farm workers.";
                health = 240;
                armor = 2;
                attack = 5.5;
                
                mana = 200;
                manaRegen = 0.67f;

                goldCold = 75;
                foodCost = 1;

                attackCooldown = 2.0f;
                buildTime = 15;

                is = PEASANT;
            }
        
            std::string GetDescription() override{};
            void RegenHealth() override {};
            void Attack() override {};
    };
}

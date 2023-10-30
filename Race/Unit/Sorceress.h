#pragma once

#include "Unit.h"
#include "../Spells/Polymorph.h"
#include "../Spells/Slow.h"

#include <vector>

using namespace Warcraft::Spells;

namespace Warcraft::Units
{
    class Sorceress : public Unit
    {
        public:
            Sorceress()
            {
                name = "Sorceress";
                description = "Queen of magic.";
                health = 325;
                armor = 2;
                attack = 11;
                mana = 200;
                manaRegen = 0.67f;

                goldCold = 175;
                foodCost = 2;

                attackCooldown = 1.7;
                buildTime = 30;

                is = OTHER;

                spells.push_back(new Polymorph());
                spells.push_back(new Slow());
            }
        
            std::string GetDescription() override{};
            void RegenHealth() override {};
            void Attack() override {};
    };
}

#pragma once
#include <vector>
#include "../Spells/Spell.h"
#include "../../Living.h"
#include <string>

using namespace Warcraft::Spells;
using Warcraft::Living;

namespace Warcraft::Units
{

    class Unit : public Living
    {
        public:
            Unit()
            {

            }

        public:
            virtual void Attack() = 0;
            virtual void RegenHealth() = 0;

        public:

            float attack;
            float attackCooldown;
            float attackRange;
            int movementSpeed = 1;

        public:
            std::vector<Spell*> spells;
    };
}

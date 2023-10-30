#pragma once
#include <vector>
#include "../Spells/Spell.h"
#include "../../Living.h"
#include <string>

using namespace Warcraft::Spells;
using Warcraft::Living;

namespace Warcraft::Units
{
    enum Type
    {
        PEASANT,
        OTHER
    };

    enum Move
    {
        W,
        NW,
        N,
        NE,
        E,
        SE,
        S,
        SW
    };

    class Unit : public Living
    {
        public:
            Unit()
            {

            }

        public:
            virtual void Attack(Living& un) = 0;
            virtual void RegenHealth() = 0;
        
        public:
            void Move(Move dir)
            {
                switch (dir)
                {
                case W:
                    
                    break;
                case NW:

                    break;

                case N:

                    break;

                case NE:

                    break;

                case E:

                    break;

                case SE:

                    break;

                case S:
                    
                    break;

                case SW:

                    break;
                }
            }

        public:
        
            bool isInvisible = false;
            float attack;
            float attackCooldown;
            float attackRange;
            int movementSpeed = 1;
            float hpRegen = 0.25f;
            Type is;
    };
}

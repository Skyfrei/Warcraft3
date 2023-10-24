#pragma once

#include "../Unit.h"

namespace Warcraft::Units::Heroes
{
    enum Attribute
    {
        Strength,
        Agility,
        Intelligence
    };

    class Hero : public Unit
    {
        public: 
            Hero()
            {

            }

        public:
            bool hiredOnce = false;
            float strength;
            float agility;
            float intelligence;
            Attribute primaryAttribute;
        

    };
}


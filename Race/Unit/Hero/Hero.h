#pragma once

#include "../Unit.h"

namespace Warcraft::Units::Heroes
{
    enum Attribute
    {
        STRENGTH,
        AGILITY,
        INTELLIGENCE
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


#pragma once

#include "../Unit.h"

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
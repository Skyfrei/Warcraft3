#pragma once
#include "../../Vec2.h"

class Structure
{
    public:
        Structure()
        {
            
        }

    public:
        float hp;
        int level;
        float goldCost;
        float lumberCost;
        int foodProd;

        float buildTime;
        float armor;
        
        float daySight;
        float nightSight;

        Vec2 pos;
        Vec2 range;
        
        
};
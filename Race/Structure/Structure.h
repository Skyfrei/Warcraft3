#pragma once
#include "../../Tools/Vec2.h"

namespace Warcraft::Structures
{
    class Structure
    {
        public:
            Structure()
            {
                
            }

        public:
            virtual int GetHealth() = 0;
            
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
            
            // std::vector<> building contained within building
    };
}

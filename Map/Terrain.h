#pragma once
#include "../Tools/Vec2.h"

namespace Warcraft::Environment
{
    enum TerrainType
    {
        GROUND,
        TREE,
        GOLD
    };

    class Terrain
    {
        public:
            Terrain(int x, int y)
            {
                location.x = x;
                location.y = y;
            }

        public:
            virtual int GetResourceLeft() = 0;
            
        private: 
            int resourceLeft;
            Vec2 location;
            TerrainType type = GROUND;
    };
}


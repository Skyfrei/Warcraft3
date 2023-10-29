#pragma once

#include <iostream>
#include <string>
#include "Tools/Vec2.h"

namespace Warcraft
{
    class Living
    {
        public:
            Living()
            {
                
            }

        virtual void GetDescription() = 0;

        public:
            Vec2 coords;
            int health;
            int armor;
            
            std::string name;

            
    };
}

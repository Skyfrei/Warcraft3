#pragma once
#include "../../Tools/Vec2.h"
#include "../Living.h"

using Warcraft::Living;

namespace Warcraft::Structures
{
    class Structure : public Living
    {
        public:
            Structure()
            {
                                  
            }

        public:
            virtual int GetHealth() = 0;
            
            // std::vector<> building contained within building
    };
}

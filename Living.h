#pragma once

#include <iostream>
#include <string>

namespace Warcraft
{   
    enum Side
    {
        PLAYER,
        ENEMY
    };

    enum ProducedAt
    {
        
    };

    class Living
    {
        public:
            Living()
            {
                
            }

        virtual std::string GetDescription() = 0;

        public:
            std::string name;
            std::string description;
            int health;
            int armor;
            
            float hpRegen = 0;
            float mana = 0;
            float manaRegen = 0;

            int goldCold;
            int foodCost = 0;
            
            int buildTime;

            Side is;
            ProducedAt buildsAt;

            
    };
}

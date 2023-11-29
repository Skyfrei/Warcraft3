#pragma once
#include "Structure.h"


namespace Warcraft::Structures
{
    enum Upgrade
    {
        WOOD,
        BRONZE,
        IRON,
        STEEL,
        MITHRIL
    };

    class TownHall : public Structure
    {
        public:
            TownHall()
            {
                name = "Town Hall";
                description = "Can recruit peasants.";
                health = 1500;
                maxHealth = health;
                
                goldCost = 590;
                type = HALL;
                buildTime = 180;

                description = "Can build unit upgrades.";
            }
        public:
            Upgrade currentUpgrade = WOOD;
            void UpgradeEquipment(Upgrade& curr)
            {
                
            };
            void FinishBuilding() override
            {

            }
            std::string GetDescription() override
            {

            }
            
    };


}

#include "Structure.h"


namespace Warcraft::Structures
{

    class TownHall : public Structure
    {
        public:
            Blacksmith()
            {
                name = "Blacksmith";
                description = "Can build unit upgrades.";
                health = 1200;
                armor = 20;

                goldCold = 200;

                buildTime = 50;
            }
        public:
            Upgrade currentUpgrade = WOOD;
            void UpgradeEquipment(Upgrade& curr)
            {
                
            };
            
    }
}

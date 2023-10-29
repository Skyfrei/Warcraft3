#pragme once
#include "Structure.h"
#include "../Unit/Unit.h"
#include "../Unit/Peasant.h"
#include "../Unit/Sorceress.h"
#include "../Unit/Footman.h"

using namespace Warcraft::Units;

namespace Warcraft::Structures
{
    enum UnitType
    {
        FOOTMAN,
        PEASANT,
        SORCERESS
    };

    class Barrack : public Structure
    {
        public:
            Barrack()
            {
                name = "Barrack";
                description = "Can create units.";
                health = 1500;
                armor = 20;

                goldCold = 220;

                buildTime = 70;
            }
        
        public:
            Unit& CreateUnit(UnitType type)
            {
                switch (type)
                {
                case FOOTMAN:
                    Footman man;
                    return man;
                
                default:
                    break;
                }
                return;
            }
    };
}

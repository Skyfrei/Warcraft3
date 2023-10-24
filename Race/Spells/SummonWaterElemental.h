#include "Spell.h"
#include "../Unit/Unit.h"


// Duration	Cooldown	Mana Cost
// 60 sec.	20 sec.	125
// Level	Effect	Hero Level Req
// 1	500 hit points, light damage	1
// 2	625 hit points, moderate damage	3
// 3	825 hit points, heavy damage	5


// Summons a Water Elemental to attack the Archmage's enemies.
namespace Warcraft::Spells
{
    using Warcraft::Units;
    class SummonWaterElemental : public Spell
    {
        public:
            SummonWaterElemental()
            {
                name = "Summon Water Elemental";
                type = MANUAL;
                manaCost = 125;
                cooldown = 20;
                duration = 60;
            }
        public:
            virtual void GiveDescription(){}
            Unit Spawn();
        private:
            float manaRegen = 0.75;
    };
}

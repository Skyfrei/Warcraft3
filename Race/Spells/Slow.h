
#include "Spell.h"
#include "../Unit/Unit.h"


// Duration (Hero)	Cooldown	Mana Cost	Range	Allowed Targets	Effect
// 60 (10) sec.	1 sec.	50	70	Air, Ground, Enemy	Attack Rate reduced 25% Movement Speed reduced 55

using Warcraft::Units::Unit;

namespace Warcraft::Spells
{
    class Slow : public Spell
    {
        public:
            Slow()
            {
                cooldown = 1.0f;
                manaCost = 50;
                range = 70;
                duration = 60.0f;
                name = "Slow";
                type = MANUAL;
            }
        public:
            virtual void GetDescription() override
            {
                return;
            }
            void SlowEnemy(Unit& un)
            {
                un.movementSpeed /= 1.55f;
            }
    };
}

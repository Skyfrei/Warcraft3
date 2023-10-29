
#include "Spell.h"
#include "../Unit/Unit.h"


// Duration	Cooldown	Mana Cost	Range	Allowed Targets	Effect	Requirements
// 60 sec.	3 sec.	200	50	Air, Ground, Non Hero, Enemy, Organic, Neutral	Turns target into a Sheep or Flying Sheep
// Sorceress Master Training

using Warcraft::Units::Unit;

namespace Warcraft::Spells
{
    class Polymorph : public Spell
    {
        public:
            Polymorph()
            {
                cooldown = 3.0f;
                manaCost = 200;
                range = 80;
                areaOfEffect = 20;
                duration = 60.0f;
                name = "Polymorph";
                type = MANUAL;

            }
        public:
            virtual void GetDescription() override
            {
                return;
            }
            void ChangeShape(Unit& un)
            {

            }
    };
}

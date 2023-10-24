#include "Hero.h"
#include "../../Spells/Blizzard.h"
#include "../../Spells/BrillanceAura.h"
#include "../../Spells/SummonWaterElemental.h"
#include "../../Spells/MassTeleport.h"

namespace Warcraft::Units::Heroes
{
    class Archmage : public Hero
    {
        public:
            Archmage()
            {
                spells.push_back(new Blizzard());
                spells.push_back(new BrillanceAura());
                spells.push_back(new SummonWaterElemental());
                spells.push_back(new MassTeleport());
            }

        virtual void Attack() override{}
    };
}



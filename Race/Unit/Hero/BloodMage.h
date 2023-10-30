#include "Hero.h"


namespace Warcraft::Units::Heroes
{
    class BloodMage : public Hero
    {
        public:
            Archmage()
            {
                spells.push_back();
                spells.push_back();
                spells.push_back();
            }

        void Attack() override{}
        void RegenHealth() override {}
        std::string GetDescription() override {return "Bloodmage hero";}

    };
}



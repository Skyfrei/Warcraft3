#include "../Tools/Vec2.h"
#include <vector>
#include "../Unit/Unit.h"


namespace Warcraft::State
{

    using Units;

    class Player
    {
        public: 
            Player()
            {

            }

            void Initialize();

        public:
            int gold, lumber;
            Vec2 food;

            std::vector<Unit*> units;
            std::vector<Structure*> structures;
    };
}


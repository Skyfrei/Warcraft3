#include <Player.h>
#include "../Map/Map.h"

using namespace Warcraft::Environment;

namespace Warcraft::State
{
    class Manager
    {
        public:
            Manager()
            {
                // game start
                map.InitializeTerrain();
                player.Initialize();
                enemy.Initialize();


            }
        public:
            void InitializeMap();
            void CheckForMovement();
        public:
            Player player;
            Player enemy;
            Map map;
    };
}

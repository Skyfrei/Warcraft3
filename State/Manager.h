#include <Player.h>

namespace Warcraft::State
{
    class Manager
    {
        public:
            Manager()
            {
                // game start
                player.Initialize();
                enemy.Initialize();

            }
        public:
            Player player;
            Player enemy;
    };
}

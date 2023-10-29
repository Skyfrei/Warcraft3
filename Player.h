#pragma once

enum Upkeep
{
    NIE,
    LOW,
    MEDIUM,
    HIGH
};

class Player
{
    public:
        Player()
        {

        }

    public:
        int gold, food, maxFood;
        Upkeep upkeep = NIE;
};
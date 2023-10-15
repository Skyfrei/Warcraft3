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
        int gold, lumber, food, maxFood;
        Upkeep upkeep = Nie;
};
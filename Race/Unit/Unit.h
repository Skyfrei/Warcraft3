#pragma once
#include <vector>
#include "../Spells/Spell.h"
#include <string>

using namespace Warcraft::Spells;

namespace Warcraft::Units
{

    enum UnitClassification
    {
        GROUND, 
        AIR
    };

    enum Side
    {
        PLAYER,
        ENEMY
    };

    enum ProducedAt
    {
        
    };

    class Unit
    {
        public:
            Unit()
            {

            }

        public:
            virtual void Attack() = 0;

        public:
            float hpRegen;
            float mana;
            float manaRegen;
            int goldCost;
            int lumberCost = 0;
            int foodCost = 1;
            int level = 1;
            float buildTime;
            UnitClassification unitType;
            ProducedAt building;

            float attack;
            float attackCooldown;
            float attackRange;
            std::vector<int> canAttack;

            float movementSpeed;

            Side belongs;
        
        public:
            std::vector<Spell*> spells;
    };
}

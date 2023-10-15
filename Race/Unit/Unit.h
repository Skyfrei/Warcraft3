#pragma once
#include <vector>
#include "../Spells/Spell.h"
#include <string>

enum UnitClassification
{
   GROUND, 
   AIR
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
        std::string name;
        float hp;
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

        float armor;
        float attack;
        float attackCooldown;
        std::vector<int> canAttack;

        int daySight;
        int nightSight;
        float movementSpeed;
    
    public:
        std::vector<Spell*> spells;
};


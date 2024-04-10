//
// Created by Klavio Tarka on 13.12.23.
//
#include "Player.h"

#include <memory>

#include "Race/Structure/Barrack.h"
#include "Race/Structure/Farm.h"
#include "Race/Structure/Structure.h"
#include "Race/Structure/TownHall.h"
#include "Race/Unit/Unit.h"
Player::Player(Map &m) : map(m) {
  Initialize();
  food.y = 10;
  gold = 2000;
}
Player::Player() {}
void Player::Move(Unit *u, Vec2 v) {
  actionT t = v;
  map.RemoveOwnership(u);
  u->InsertAction(t);
  map.AddOwnership(u, u->coordinate);
}
void Player::Attack(Unit *u, Living *l) {
  AttackAction b(l);
  actionT t = b;
  map.RemoveOwnership(u);
  u->InsertAction(t);
  map.AddOwnership(u, u->coordinate);
}
void Player::Build(Peasant *p, StructureType type, Vec2 v) {
  Terrain &ter = map.GetTerrainAtCoordinate(v);
  if (ter.structureOnTerrain == nullptr) {
    Structure *s = ChooseToBuild(type);
    if (gold - s->goldCost >= 0) {
      BuildAction b(s, v);
      actionT t = b;
      p->InsertAction(t);
    }
  }
}
void Player::Initialize() {
  structures.push_back(std::make_unique<TownHall>());
  for (int i = 0; i < 5; i++) {
    units.push_back(std::make_unique<Peasant>());
    units[i]->coordinate = structures[0]->coordinate;
  }
  structures.push_back(std::make_unique<Barrack>());

  ValidateFood();
}
void Player::SetInitialCoordinates(Vec2 v) {
  for (auto &structure : structures) {
    structure->coordinate = v;
    map.AddOwnership(structure.get(), structure->coordinate);
  }
  for (auto &unit : units) {
    unit->coordinate = v;
    map.AddOwnership(unit.get(), unit->coordinate);
  }
}
std::vector<std::unique_ptr<Unit>> Player::SelectUnits() {
  std::vector<std::unique_ptr<Unit>> result;
  return result;
}

bool Player::HasStructure(StructureType structType) {
  for (const auto &structure : structures) {
    if (structure->is == structType) {
      return true;
    }
  }
  return false;
}

bool Player::HasUnit(UnitType unitType) {
  for (const auto &unit : units) {
    if (unit->is == unitType) {
      return true;
    }
  }
  return false;
}

// std::vector<Living> &Player::Select() {}

Structure &Player::FindClosestStructure(Unit &unit, StructureType type) {
  double min = 100;
  int8_t index = 0;

  for (int i = 0; i < structures.size(); i++) {
    if (structures[i]->is == type) {
      Vec2 difference = unit.FindDifference(structures[i]->coordinate);
      double temp =
          std::sqrt(std::pow(difference.x, 2) + std::pow(difference.y, 2));
      if (temp <= min) {
        min = temp;
        index = i;
      }
    }
  }
  return *structures[index];
}

void Player::ValidateFood() {
  food.x = 0;
  food.y = 0;

  for (const auto &unit : units) {
    food.x += unit->foodCost;
  }
  for (const auto &structure : structures) {
    if (structure->is == FARM) food.y += 5;
  }
}

void Player::RecruitSoldier(UnitType unitType) {
  if (HasStructure(BARRACK)) {
    if (unitType == ARCHMAGE) {
      bool temp = HasUnit(BLOODMAGE);
      if (temp) {
        return;
      }
    } else if (unitType == BLOODMAGE) {
      bool temp = HasUnit(ARCHMAGE);
      if (temp) {
        return;
      }
    }
  }

  for (const auto &structure : structures) {
    if (structure->is == BARRACK) {
      dynamic_cast<Barrack &>(*structure).CreateUnit(units, gold, unitType);
    }
  }
}

void Player::UpdateGold(int g) { gold += g; }

Structure *Player::ChooseToBuild(StructureType structType) {
  Structure *str;
  switch (structType) {
    case HALL:
      str = new TownHall();
      break;

    case BARRACK:
      str = new Barrack();
      break;

    case FARM:
      str = new Farm();
      break;

    default:
      break;
  }
  return str;
  // Peasant a = FindClosestLiving(terrCoord);
}

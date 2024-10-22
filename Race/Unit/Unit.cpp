
// Created by Klavio Tarka on 14.12.23.
//
#include "Unit.h"
#include "Peasant.h"
#include <iostream>


Unit::Unit() {}
bool Unit::operator==(const Unit& other)const{
  if (other.coordinate == coordinate && other.health == health && other.is == is)
    return false;
  return true;
}
void Unit::InsertAction(actionT v) {
  if (std::find(actionQueue.begin(), actionQueue.end(), v) ==
      actionQueue.end()) {
    actionQueue.push_back(v);
  }
}
void Unit::ResetActions() {
  actionQueue.erase(actionQueue.begin(), actionQueue.end());
}
bool Unit::HasCommand() { return actionQueue.size() > 0; }

actionT Unit::TakeAction() {
  if (!HasCommand()) return {};

  if (std::holds_alternative<AttackAction>(actionQueue[0])) {
    AttackAction &action = std::get<AttackAction>(actionQueue[0]);
    if (action.object->health <= 0) {
      actionQueue.erase(actionQueue.begin());
      return action;
    }
    action.prevCoord = coordinate;
    Attack(*action.object);
    return action;
  }

  else if (std::holds_alternative<MoveAction>(actionQueue[0])) {
    MoveAction &action = std::get<MoveAction>(actionQueue[0]);
    if (coordinate.x == action.destCoord.x &&
        coordinate.y == action.destCoord.y) {
      actionQueue.erase(actionQueue.begin());
      return {};
    }
    action.prevCoord = coordinate;
    Move(action.destCoord);
    return action;

  } else if (std::holds_alternative<BuildAction>(actionQueue[0])) {
    BuildAction &action = std::get<BuildAction>(actionQueue[0]);
    if (action.stru->health >= action.stru->maxHealth) {
      actionQueue.erase(actionQueue.begin());
      return action;
    }
    action.prevCoord = coordinate;
    Peasant &p = static_cast<Peasant &>(*this);
    p.Build(action.stru);
    return action;
  } else if (std::holds_alternative<FarmGoldAction>(actionQueue[0])) {
    Peasant &p = static_cast<Peasant &>(*this);
    FarmGoldAction &action = std::get<FarmGoldAction>(actionQueue[0]);
    if (action.terr->resourceLeft <= 0) {
      actionQueue.erase(actionQueue.begin());
      return {};
    }
    action.prev = coordinate;
    p.FarmGold(*action.terr, *action.hall, action.gold);
    return action;
  }
  return {};
}
int Unit::GetActionQueueSize() { return actionQueue.size(); }

void Unit::Move(Vec2 terr) {
  if (!IsMovable()) {
    return;
  }
  Vec2 difference;
  difference.x = coordinate.x - terr.x;
  difference.y = coordinate.y - terr.y;

  if (difference.x > 0 && difference.y > 0)
    ChangeCoordinate(NW);
  else if (difference.x > 0 && difference.y < 0)
    ChangeCoordinate(NE);
  else if (difference.x < 0 && difference.y > 0)
    ChangeCoordinate(SW);
  else if (difference.x < 0 && difference.y < 0)
    ChangeCoordinate(SE);
  else if (difference.x == 0 && difference.y < 0)
    ChangeCoordinate(E);
  else if (difference.x == 0 && difference.y > 0)
    ChangeCoordinate(W);
  else if (difference.x > 0 && difference.y == 0)
    ChangeCoordinate(N);
  else if (difference.x < 0 && difference.y == 0)
    ChangeCoordinate(S);
}

bool Unit::WithinDistance(Vec2 terr) {
  Vec2 difference = FindDifference(terr);

  if (std::abs(difference.x) <= 1 && std::abs(difference.y) <= 1) return true;

  return false;
}

Vec2 Unit::FindDifference(Vec2 terr) {
  Vec2 difference;
  difference.x = coordinate.x - terr.x;
  difference.y = coordinate.y - terr.y;

  return difference;
}

void Unit::Attack(Living &un) {
  if (WithinDistance(un.coordinate)) {
    if (CanAttack()) {
        if (!un.IsDead()){
            un.health -= attack;
        }
    }
  } else
    Move(un.coordinate);
}

bool Unit::CanAttack() {
  auto currentCd = std::chrono::duration_cast<std::chrono::milliseconds>(high_resolution_clock::now() - attackTime);
  if (currentCd >= attackCooldown) {
    
    attackTime = high_resolution_clock::now();
    return true;
  }
  return false;
}

bool Unit::IsMovable() {
    auto currentCd = std::chrono::duration_cast<std::chrono::milliseconds>(high_resolution_clock::now() - moveTime);

    if (currentCd >= moveCooldown) {
        moveTime = high_resolution_clock::now();
        return true;
    }
    return false;
}

void Unit::RegenHealth() {
  auto currentCd =  std::chrono::duration_cast<std::chrono::milliseconds>(high_resolution_clock::now() - hpTime);

  if (currentCd >= hpCooldown) {
    if (health + hpRegen >= maxHealth) return;
    health += hpRegen;
    hpTime = high_resolution_clock::now();
  }
}

void Unit::ChangeCoordinate(MoveType dir) {
  switch (dir) {
    case W:
      coordinate.y -= 1;
      break;
    case NW:
      coordinate.x -= 1;
      coordinate.y -= 1;
      break;
    case N:
      coordinate.x -= 1;
      break;
    case NE:
      coordinate.x -= 1;
      coordinate.y += 1;
      break;
    case E:
      coordinate.y += 1;
      break;
    case SE:
      coordinate.x += 1;
      coordinate.y += 1;
      break;
    case S:
      coordinate.x += 1;
      break;
    case SW:
      coordinate.x += 1;
      coordinate.y -= 1;
      break;
    default:
      break;
  }
}

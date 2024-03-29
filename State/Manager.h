#pragma once

#include <chrono>

#include "../Living.h"
#include "../Map/Map.h"
#include "../Race/Structure/Structure.h"
#include "../Race/Unit/Unit.h"
#include "Player.h"

class Manager {
 public:
  Manager();

  void MainLoop();
  void ManageLiving(Player &pl);
  float GetTime();
  void CheckForMovement();

 public:
  Player player;
  Player enemy;
  Map map;
  std::chrono::high_resolution_clock::time_point time1 =
      std::chrono::high_resolution_clock::now();
  std::chrono::high_resolution_clock::time_point time =
      std::chrono::high_resolution_clock::now();
};

//
// Created by Klavio Tarka on 13.12.23.
//
#include "Peasant.h"
namespace Warcraft::Units {
    void Peasant::Build(std::vector<std::unique_ptr<Structure>> &structures, int &playerGold, StructureType type,
                        Terrain &terr) {
        std::unique_ptr<Structure> struc;
        // if (!buildTask.empty())
        // {
        //     WorkOnTask();
        //     return;
        // }
        if (WithinDistance(terr.coord))
        {

            if (terr.type == GROUND) {
                switch (type) {
                    case BARRACK:
                        struc = std::make_unique<Barrack>();
                        break;

                    case FARM:
                        struc = std::make_unique<Farm>();
                        break;

                    case HALL:
                        struc = std::make_unique<TownHall>();
                        break;

                    default:
                        break;
                }
                if (HasEnoughGold(playerGold, struc->goldCost)) {
                    playerGold -= struc->goldCost;
                    //buildTask.emplace_front(*struc);
                    structures.emplace_back(std::move(struc));
                    //terr.object = stru;
                }
            }
        } else {
            Move(terr.coord);
        }
    }
    void Peasant::WorkOnTask()
    {
//        if (buildTask.front().percentage <= 100.0)
//        {
//            if (GetAttackTime())
//            {
//                if (WithinDistance(buildTask.front().livingReference.coordinate))
//                {
//                    buildTask.front().UpdateTask(attack);
//                    return;
//                }
//            }
//        }
//        else
//            buildTask.pop_front();
    }

    void Peasant::ChangeBuilding()
    {

    }

    void Peasant::FarmGold(Terrain &terr, TownHall &hall) {
        if (WithinDistance(terr.coord)) {
            if (terr.type == GOLD) {
                if (goldInventory >= 20)
                    TransferGold(hall);
                if (GetAttackTime())
                    goldInventory++;
            }
        } else {
            Move(terr.coord);
        }
    }

    void Peasant::TransferGold(TownHall &hall) {
        Move(hall.coordinate);

        if (WithinDistance(hall.coordinate))
            goldInventory = 0;

    }
}
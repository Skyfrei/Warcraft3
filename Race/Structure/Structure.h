#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "../../Living.h"

class Structure : public Living {
 public:
  Structure() {}
  virtual std::unique_ptr<Structure> Clone() const = 0;
  virtual void FinishBuilding() = 0;
  bool operator==(const Structure& other);

 public:
  StructureType is = OTHER;
  bool isBeingBuilt = false;
};

#endif

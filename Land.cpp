// Land.cpp (Skeleton)
#include <iostream>

#include "Land.h"

int Land::totalLands = 0;

Land::Land(const std::string& name, int cost, LandType t) : Card(name, cost) {
  landType = t;
  totalLands++;
  // TODO: increment totalLands count
}

Land::Land(const Land& other) : Card(other.name, other.cost) {
  // TODO: copy other's landType
  landType = other.landType;
  totalLands++;
  // TODO: increment totalLands count
}

Land::~Land() {
    totalLands--;
  // TODO: decrement totalLands count
}

void Land::printInfo() const {
    std::cout << "Land - " << name << " (Cost " << cost << "): " << static_cast<int>(landType) << " land." << std::endl;
  // TODO: print land details in format:
  // "Land - <name> (Cost <cost>): <TypeName> land."
}

Land::LandType Land::getLandType() const {
  // TODO
  return landType;
}

int Land::getTotalLands() {
  // TODO
  return totalLands;
}
// clone() method creates a deep copy of the Landobject using the copy
// constructor
Card* Land::clone() const { return new Land(*this); }
// getType() method returns the Type for a Card object
Card::Type Land::getType() const { return Type::LAND; }

// Creature.cpp (Skeleton)
#include <iostream>

#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk,
                   int def)
    : Card(name, cost) {
  // TODO: initialize type, attack, defense
  type = t;
  attack = atk;
  defense = def;

  // TODO: increment totalCreatures count
  totalCreatures++;

}

Creature::Creature(const Creature& other) : Card(other.name, other.cost) {
  // TODO: copy other's type, attack, defense
  type = other.type;
  attack = other.attack;
  defense = other.defense;

  // TODO: increment totalCreatures count
  totalCreatures++;
}

Creature::~Creature() {
    totalCreatures--;
  // TODO: decrement totalCreatures count
}

void Creature::printInfo() const {
  // TODO: print creature details in format:
  std::cout << "Creature - " << name << " (Cost " << cost<< "): " << "Creature Type=" <<static_cast<int>(type) <<",\n" << "Attack=" << attack << ", Defense=" << defense << std::endl; 
  // "Creature - <name> (Cost <cost>): Creature Type=<typeName>,
  // Attack=<attack>, Defense=<defense>"
}

int Creature::getAttack() const {
  return attack;
}

int Creature::getDefense() const {
  return defense;
}

Creature::CreatureType Creature::getCreatureType() const {
  return type;
}

int Creature::getTotalCreatures() {
return totalCreatures;
}
// clone() method creates a deep copy of the Creature object using the copy
// constructor
Card* Creature::clone() const { return new Creature(*this); }
// getType() method reuturns the Type for a Card object
Card::Type Creature::getType() const { return Type::CREATURE; }

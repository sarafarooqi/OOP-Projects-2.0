#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"

class Warrior: public Player{
    public:
    string weapon;

    Warrior(string name, int health, int damage, string weapon);
    
    //deals damage to opponent based on the player's mana points
    void swingWeapon(Player* opponent);
};


#endif

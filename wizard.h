#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include "player.h"


class Wizard: public Player{
    public:
    int mana;

    Wizard(string name, int health, int damage, int mana)
    :Player(name, health,damage){}
    //deals damage to opponent based on player's mana point
    void castSpell(Player* opponent);
};

#endif

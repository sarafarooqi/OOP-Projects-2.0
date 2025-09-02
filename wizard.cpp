#include "wizard.h"
#include "player.h"
#include <string>

using namespace std;

    Wizard::Wizard(string name, int health, int damage, int mana)
    :Player(name, health,damage){
        this -> mana = mana;
    }
    //deals damage to opponent based on player's mana point
    void Wizard::castSpell(Player* opponent){
        if (mana <= 0){
            cout << name << "is out of mana and cannot cast a spell"<<endl;
        }
        mana = mana - damage;
        if(mana = 0){
            mana = 0;
        }
        std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
        this->attack(opponent, damage);
    }

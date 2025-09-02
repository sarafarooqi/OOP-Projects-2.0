#include "warrior.h"
#include "player.h"
#include <string>

using namespace std;

    Warrior::Warrior(string name, int health, int damage, string weapon)
    :Player (name, health, damage){
        this -> weapon = weapon;
    }
    
    //deals damage to opponent based on the player's mana points
    void Warrior::swingWeapon(Player* opponent){
        std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
        this->attack(opponent, damage);
    }

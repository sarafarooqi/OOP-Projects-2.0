#include "player.h"
#include <iostream>
#include <string>

using namespace std;

    //constructor that sets data members to given values
    Player::Player(string name, int health, int damage){
        this -> name = name;
        this -> health = health;
        this -> damage = damage;
    }
     int Player::getHealth(){
        return health;
    }
    string Player::getName(){
        return name;
    }
    //deals damage to the oppoonent based on the players damage points
    void Player::attack(Player* opponent, int damage){
        opponent->takeDamage(damage);
        cout << name << " dealt " << damage << " to " << opponent->getName() << endl;

    }
    //reduces player's health by a given amount
    void Player::takeDamage(int damage){
        health = health - damage;
        if(health < 0){
            health = 0;
        }
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

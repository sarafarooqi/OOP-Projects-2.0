#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player{
    protected:
    string name;
    int health;
    int damage;

    public:
    //constructor that sets data members to given values
    Player(string name, int health, int damage){
        this -> name = name;
        this -> health = health;
        this -> damage = damage;
    }
     int getHealth(){
        return health;
    }
       string getName(){
        return name;
    }
    //deals damage to the oppoonent based on the players damage points
    void attack(Player* opponent, int damage){
        opponent->takeDamage(damage);
        cout << name << " dealt " << damage << " to " << opponent->getName() << endl;

    }
    //reduces player's health by a given amount
    void takeDamage(int damage){
        health = health - damage;
        if(health < 0){
            health = 0;
        }
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }
};

#endif

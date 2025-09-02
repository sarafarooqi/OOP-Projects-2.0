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
    Player(string name, int health, int damage);
     int getHealth();
       string getName();
    //deals damage to the oppoonent based on the players damage points
    void attack(Player* opponent, int damage);
    //reduces player's health by a given amount
    void takeDamage(int damage);
};
#endif

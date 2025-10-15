#include <iostream>
#include "Player.h"
#include <string>

Player::Player(){
    health = 100;
    isBlocking = false;
}

Player::Player(std::string playerName):health(100), isBlocking(false){
    name = playerName;
}

void Player::takeDamage(int damage){
    if (isBlocking == true){
        damage = damage/2;
        isBlocking = false;
    }
    health = health - damage;
    if(health < 0){
        health = 0;
    }
}

void Player::setBlocking(bool blocking){
    isBlocking = blocking;
}

bool Player::getIsBlocking(){
    return isBlocking;
}

int Player::getHealth(){
    return health;
}

std::string Player::getName(){
    return name;
}

bool Player::isAlive(){
    if(health > 0){
        return true;
    }else{
        return false;
    }
}

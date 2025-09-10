#include <iostream>
#include <string>

#include "Appliance.h"

    Appliance::Appliance(){
        powerRating = 0;
        isOn = false;
    }
    //constructor that assigns the values
    Appliance::Appliance(int powerRating, bool isOn){
        this->powerRating = powerRating;
        this->isOn = isOn;
    }

    int Appliance::get_powerRating(){
        return powerRating;
    }

    bool Appliance::get_isOn(bool isOn){
        return isOn;
    }

    void Appliance::turnOn(){
        isOn = true;
    }
    void Appliance::turnOff(){
        isOn = false;
    }
    int Appliance::getPowerConsumption(){
        return 0;
    }

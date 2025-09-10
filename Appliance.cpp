#include <iostream>
#include <string>

#include "Appliance.h"

    //default constructor
    Appliance::Appliance(){
        powerRating = 0;
        isOn = false;
    }
    //constructor that assigns the values
    Appliance::Appliance(int powerRating){
        this->powerRating = powerRating;
        this->isOn = false;
    }

    int Appliance::get_powerRating(){
        return powerRating;
    }

    void Appliance::set_powerRating(int powerRating){
        this->powerRating = powerRating;
    }

    bool Appliance::get_isOn(){
        return isOn;
    }

    void Appliance::set_isOn(bool isOn){
        this->isOn = isOn;
    }

    void Appliance::turnOn(){
        isOn = true;
    }
    void Appliance::turnOff(){
        isOn = false;
    }
   double Appliance::getPowerConsumption(){
        return 0.0;
    }



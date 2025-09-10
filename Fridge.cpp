#include "Fridge.h"

    Fridge::Fridge(){
    }

    Fridge::Fridge(int powerRating, double volume):Appliance(powerRating){
        this->volume = volume;
    }

    void Fridge::setVolume(double volume){
         this->volume = volume;
    }
    double Fridge::getVolume(){
        return volume;
    }
    double Fridge::getPowerConsumption(){
        return get_powerRating()*24*(volume/100.0);
    }

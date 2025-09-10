#include "TV.h"
#include "Appliance.h"

    TV::TV (){
    }

    TV::TV(int powerRating, double screenSize):Appliance(powerRating){
        this->screenSize = screenSize;
    }
    void TV::setScreenSize(double screenSize){
        this->screenSize = screenSize;
    }
    double TV::getScreenSize(){
        return screenSize;
    }
    double TV::getPowerConsumption(){
        return powerRating*(screenSize/10);
    }

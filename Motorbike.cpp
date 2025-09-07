#include "Motorbike.h"

   Motorbike::Motorbike(int ID):Vehicle(ID){
    }

    int Motorbike::getParkingDuration(duration){
        return duration - (duration * 0.15);
    }

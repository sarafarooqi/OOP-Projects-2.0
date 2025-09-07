#include "Motorbike.h"

   Motorbike::Motorbike(int ID):Vehicle(ID){
    }

    int Motorbike::getParkingDuration(){
        return duration - (duration * 0.15)/100;
    }

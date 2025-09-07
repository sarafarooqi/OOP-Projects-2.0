#include "Motorbike.h"

   Motorbike::Motorbike(string timeOfEntry, int ID, int duration):Vehicle(timeOfEntry, ID){
        this -> duration = duration;
    }

    int Motorbike::getParkingDuration(){
        int new_time;
        new_time = duration * 0.15;
        return duration - new_time;
    }

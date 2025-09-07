#include "Bus.h"

    Bus::Bus(string timeOfEntry, int ID, int duration):Vehicle(timeOfEntry, ID){
        this -> duration = duration;
    }

    int Bus::getParkingDuration(){
        int new_time;
        new_time = duration * 0.25;
        return duration - new_time;
    }

#include "Bus.h"

    Bus::Bus(int ID):Vehicle(ID){
    }

    int Bus::getParkingDuration(int duration){
        return duration - (duration * 0.25);
    }

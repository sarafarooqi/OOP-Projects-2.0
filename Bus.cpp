#include "Bus.h"

    Bus::Bus(int ID):Vehicle(ID){
    }

    int Bus::getParkingDuration(){
        return duration - (duration * 0.25)/100;
    }

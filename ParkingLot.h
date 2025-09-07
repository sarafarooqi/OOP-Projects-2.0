#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <iostream>
using namespace std;

class ParkingLot {
protected:
    int maxSpaces;
    Vehicle** vehicles;
    int count;

public:
    ParkingLot(int maxSpaces);
    int getCount();
    void parkVehicle(Vehicle* types);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif

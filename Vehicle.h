#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
    string timeOfEntry;
    int ID;
    int duration;

    public:
    Vehicle(string timeOfEntry, int ID);
    virtual int getParkingDuration() = 0;
};
#endif

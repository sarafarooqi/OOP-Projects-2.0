#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int ID);
    virtual ~Vehicle() = default;
    virtual int getParkingDuration() = 0;
    int getID();
};
#endif

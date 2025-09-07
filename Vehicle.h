#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
    time_t timeOfEntry;
    int ID;

    public:
    Vehicle(int ID);
    int getID() const;
    virtual int getParkingDuration(int duration) = 0;
    virtual ~Vehicle() = default;
};
#endif

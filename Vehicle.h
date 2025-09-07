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

    void setTime(int duration){
        dur1 = duration;
    }
    virtual int getParkingDuration() = 0;
    virtual ~Vehicle() = default;
};
#endif

#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus: public Vehicle{
    public:
    Bus(string timeOfEntry, int ID, int duration);
    int getParkingDuration() override;
};
#endif

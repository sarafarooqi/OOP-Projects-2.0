#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

class Motorbike: public Vehicle{
    public:

    Motorbike(string timeOfEntry, int ID, int duration);
    int getParkingDuration() override;

};

#endif

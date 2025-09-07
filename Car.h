#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car: public Vehicle{
    public:

    Car(string timeOfEntry, int ID, int duration);
    int getParkingDuration() override;

};

#endif

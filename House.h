#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House: public Appliance{
    private:
    Appliance** appliances;
    int capacity;
    int counter;

    public:
    House();
    House(int numAppliances);

    bool addAppliance(Appliance *a);

    double getTotalPowerConsumption();

};

#endif

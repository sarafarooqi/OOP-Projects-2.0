#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    protected:
    int powerRating;
    bool isOn;
    
    public:
    //default constructor
    Appliance();
    //constructor that assigns the values
    Appliance(int powerRating, bool isOn);
    int get_powerRating();
    bool get_isOn(bool isOn);
    void turnOn();
    void turnOff();
    virtual int getPowerConsumption();
};

#endif

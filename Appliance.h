#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
    int powerRating;
    bool isOn;
    
    public:
    //default constructor
    Appliance();
    //constructor that assigns the values
    Appliance(int powerRating);

    int get_powerRating();

    void set_powerRating(int powerRating);

    bool get_isOn();

    void set_isOn(bool isOn);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};


#endif

#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string Instrument;
    int Experience;

public:
    //a default constructor
    Musician();
    Musician(std::string instrument, int experience);
    //returns the instrument played
    std::string get_instrument();
    //returns the number of years experience
    int get_experience();
};

#endif

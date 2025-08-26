#include "Musician.h"
#include <iostream> 
#include <string>

Musician::Musician(){
    Instrument = "null";
    Experience = 0;
}

Musician::Musician(std::string instrument, int experience){
    Instrument = instrument;
    Experience = experience;
}

std::string Musician::get_instrument(){
    return Instrument;
}

int Musician::get_experience(){
    return Experience;
}

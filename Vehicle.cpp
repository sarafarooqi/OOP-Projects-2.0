#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;


Vehicle::Vehicle(int ID){
    this -> timeOfEntry = time(0);
    this -> ID = ID;
}
int Vehicle::getID() const{
    return ID;
}

#include "Vehicle.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

Vehicle::Vehicle(int ID) {
    this->timeOfEntry = std::time(nullptr);
    this->ID = ID;
}

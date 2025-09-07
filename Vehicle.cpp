#include "Vehicle.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() {
    int duration = (std::time(nullptr) - timeOfEntry);
    int reduction = (duration * 0.15);
    return duration - reduction;
}

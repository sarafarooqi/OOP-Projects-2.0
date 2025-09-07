#include "Car.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

Car::Car(int ID) : Vehicle(ID) {
}

int Car::getParkingDuration() {
    int duration = (std::time(nullptr) - timeOfEntry);
    int reduction = (duration * 0.10);
    return duration - reduction;
}

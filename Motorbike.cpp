#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() {
    int duration = (std::time(nullptr) - timeOfEntry);
    int reduction = (duration * 0.15);
    return duration - reduction;
}

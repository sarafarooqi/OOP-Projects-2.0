#include "Bus.h"
#include <ctime>

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration() {
    int duration = (std::time(nullptr) - timeOfEntry);
    int reduction = (duration * 0.25);
    return duration - reduction;
}

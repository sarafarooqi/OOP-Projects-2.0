#include "ParkingLot.h"
#include <iostream>
#include <string>
using namespace std;

ParkingLot::ParkingLot(int maxSpaces) {
    this->maxSpaces = maxSpaces;
    this->count = 0;
    vehicles = new Vehicle*[maxSpaces];
}

int ParkingLot::getCount() {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* types) {
    if (count >= maxSpaces) {
        cout << "The lot is full" << endl;
        return;
    }
    vehicles[count++] = types;
}

void ParkingLot::unparkVehicle(int ID) {
    bool temp = false;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == ID) {
            for (int j = i; j < count - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            count--;
            temp = true;
            break;
        }
    }
    if (temp != false) {
        cout << "Vehicle not in the lot" << endl;
    }
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
        int counter = 0;
        for(int i = 0; i < count; i++){
            int dur1 = vehicles[i] ->getParkingDuration();
            if(dur1 > maxParkingDuration){
                counter++;
            }
        }
        return counter;
    }

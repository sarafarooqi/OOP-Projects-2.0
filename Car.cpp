#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(int ID):Vehicle(ID){
}

        int Car::getParkingDuration(int seconds){
        return seconds - (seconds * 0.10);
        }

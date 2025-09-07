#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(string timeOfEntry, int ID, int duration):Vehicle(timeOfEntry, ID){
    this->duration = duration;
}

        int Car::getParkingDuration(){
        int new_time;
        new_time = duration * 0.10;
        return duration - new_time;
        }

#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(int ID):Vehicle(ID){
}

        int Car::getParkingDuration(){
        return duration - (duration * 0.10)/100;
        }

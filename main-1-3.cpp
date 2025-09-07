#include <iostream>
#include <string>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
using namespace std;

int main(){
    ParkingLot space(10);

    for(int i = 1; i <=5; i++){
        space.parkVehicle(new Car(i));
    }
    for(int i = 6; i <=8;i++){
        space.parkVehicle(new Bus(i));
    }
    for(int i = 9; i <= 10; i++){
        space.parkVehicle(new Motorbike(i));
    }

    cout << "Number of vehicles overstaying: " << space.countOverstayingVehicles(15) << endl;
}

#include <iostream>
#include <string>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
using namespace std;

int main() {
    ParkingLot space(10);

    for (int i = 0; i <= 10; i++) {
        string type;
        cout << "Enter the type of vehicle: " << endl;
        cin >> type;

        if (type == "Car") {
            Vehicle* types = new Car(i);
            space.parkVehicle(types);
        } else if (type == "Bus") {
            Vehicle* types = new Bus(i);
            space.parkVehicle(types);
        } else if (type == "Motorbike") {
            Vehicle* types = new Motorbike(i);
            space.parkVehicle(types);
        }
    }

    int ID;
    cout << "Enter the ID of the vehicle to be removed: ";
    cin >> ID;

    space.unparkVehicle(ID);

    cout << "Vehicles currently in lot: " << space.getCount() << endl;

    return 0;
}

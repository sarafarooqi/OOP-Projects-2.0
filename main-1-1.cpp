#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main(){
    int n;
    cout << "Enter the number of vehicles you would like to park:  " << endl;
    cin >> n;

    Vehicle *vehicles[n];
    string type;


    for (int i = 0; i < n; i++){
        cout << "Enter the type of vehicle: " << endl;
        cin >> type;

        int ID = i + 1;

        if (type == "Car"){
            vehicles[i] = new Car(ID);
        }else if(type == "Bus"){
            vehicles[i] = new Bus(ID);
        }else{
            vehicles[i] = new Motorbike(ID);
        }

        int seconds;
        cout << "Enter the duration that the vehicle is parked: ";
        cin >> seconds;

        vehicles[i]->setTime(seconds);
        cout << vehicles[i]->getParkingDuration() << endl;
    }
    for (int i = 0; i < n; i++){
        delete vehicles[i];
    }
    return 0;
}

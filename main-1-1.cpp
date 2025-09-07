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
        string timeOfEntry = "10:00";
        int duration = 100;

        if (type == "Car"){
            vehicles[i] = new Car(timeOfEntry, ID, duration);
        }else if(type == "Bus"){
            vehicles[i] = new Bus(timeOfEntry, ID, duration);
        }else{
            vehicles[i] = new Motorbike(timeOfEntry, ID, duration);
        }

        cout << vehicles[i]->getParkingDuration() << endl;
    }
}

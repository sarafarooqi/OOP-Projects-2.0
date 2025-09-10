#include <iostream>
#include <string>
#include "Appliance.h"
using namespace std;

int main(){

    Appliance A(5);
    A.turnOn();
    int temp = A.get_powerRating();

    cout << temp << " and, is it on?" << A.get_isOn() << endl;
    
}

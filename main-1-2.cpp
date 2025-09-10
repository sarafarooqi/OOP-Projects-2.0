#include <iostream>
#include "Fridge.h"

using namespace std;

int main(){
    Fridge f(500, 1000);

    cout << "Volume:" << f.getVolume() << endl;
    cout << "Power Consumption:" << f.getPowerConsumption() << endl;

}

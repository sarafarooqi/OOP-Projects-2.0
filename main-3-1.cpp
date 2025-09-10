#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;

int main(){
    House h(2);

    h.addAppliance(new Fridge(100, 20));
    h.addAppliance(new TV(120, 40));

    cout << "Consumption: " << h.getTotalPowerConsumption() << endl;
}

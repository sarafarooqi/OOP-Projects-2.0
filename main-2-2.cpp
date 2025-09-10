#include <iostream>
#include "TV.h"
using namespace std;

int main(){
    TV t(500, 20);

    cout << "Screen Size: " << t.getScreenSize() << endl;
    cout << "Power Consumption: " << t.getPowerConsumption() << endl;
}

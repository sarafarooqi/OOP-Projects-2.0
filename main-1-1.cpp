#include <iostream>
#include <string>
#include "Appliance.h"
using namespace std;

int main(){

    Appliance A(5, true);
    int temp = A.get_powerRating();

    cout << temp << endl;
    
}

#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main(void){
    int n = 4;
    PersonList arr1 = createPersonList(n);
    for(int i = 0; i < n; i++){
        std::cout << arr1.people[i].name << " " << arr1.people[i].age <<std::endl;
    }
    delete[] arr1.people;
    return 0;
}

#include <iostream>
#include "Person.h"


Person* createPersonArray(int n){
    Person* array = new Person[n];
    for(int i = 0; i < n; i++){
        array[i].name = "John doe";
        array[i].age = 0;
    }

    for(int i = 0; i < n; i++){
        std::cout << "Person " << i+1 << ": " << array[i].name << ", " << array[i].age <<std::endl;
    }
    return array;

}


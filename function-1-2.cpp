#include <iostream>
#include "Person.h"


PersonList createPersonList(int n){
    PersonList new_array;
    new_array.numPeople = n;
    new_array.people = new Person[n];
    for(int i = 0; i < n; i++){
        new_array.people[i].name = "Jane doe";
        new_array.people[i].age = 1;
    }
    return new_array;

}

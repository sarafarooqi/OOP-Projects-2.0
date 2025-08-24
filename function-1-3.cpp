#include "Person.h"
#include <iostream>

PersonList deepCopyPersonList (PersonList pl){
    PersonList new_array;
    new_array.numPeople = pl.numPeople;

    new_array.people = new Person[pl.numPeople];

    for(int i = 0; i < pl.numPeople; i++){
        new_array.people[i].name = pl.people[i].name;
        new_array.people[i].age = pl.people[i].age;
    }

    return new_array;
}

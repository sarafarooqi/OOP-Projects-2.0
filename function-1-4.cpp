#include "Person.h"
#include <iostream>

PersonList shallowCopyPersonList(PersonList pl){
    PersonList new1;
    new1.numPeople = pl.numPeople;
    new1.people = pl.people;
    return new1;
}


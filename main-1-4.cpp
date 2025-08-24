#include "Person.h"
#include <iostream>

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

PersonList shallowCopyPersonList(PersonList pl);

int main(void){
    PersonList old = createPersonList(4);
    PersonList new1 = shallowCopyPersonList(old);


   new1.people[2].name = "Jenny";
   new1.people[1].age = 2;

   for(int i = 1; i < 4; i++){
    std::cout << new1.people[i].name << " " << new1.people[i].age << std::endl;
   }

   delete[] old.people;
}

#include "Person.h"
#include <iostream>

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

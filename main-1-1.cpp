#include <iostream>
#include "Person.h"

Person* createPersonArray(int n);
int main(void){
    /* Person person1;
    person1.name = "The University";
    person1.age = 150;

    std::cout << "Person(name: " << person1.name << " , age: " << person1.age << ")" << std::endl;

    Person* person2 = new Person;
    person2-> name = "Adelaide";
    person2 -> age = 0;
    std::cout << "Person2(name: " << person2->name << " , age: " << person1.age << ")" << std::endl;
 */

    int n = 4;
    Person* point = createPersonArray(n); 
    for(int i = 0; i < n; i++){
        std::cout << "Person " << i+1 << ": " << point[i].name << ", " << point[i].age <<std::endl;
    }
    delete[] point;
    return 0;
}

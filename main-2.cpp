#include "GradeManager.h"
#include <iostream>

int main(){
    GradeManager class_grades;

    class_grades.addGrade(83);
    class_grades.addGrade(54);
    class_grades.addGrade(97);

    std::cout << class_grades.getSize() << std::endl;
    std::cout << class_grades.getAverage() << std::endl;
 

}

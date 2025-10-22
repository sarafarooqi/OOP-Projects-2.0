#include "GradeManager.h"
#include <vector>

GradeManager::GradeManager(){
}

void GradeManager::addGrade(int grade){
    grades.push_back(grade);
}

void GradeManager::removeAt(int index){
    int size_vector = grades.size();
    if(index >= 0 && index < size_vector){
         grades.erase(grades.begin() + index);
    }
}

void GradeManager::updateGrade(int index, int newGrade){
    int size_v = grades.size();
    if (index >= 0 && index < size_v){
       grades[index] = newGrade;
    }
}

int GradeManager::countOccurrences(int grade){
    int counter = 0;
    int size_v = grades.size();
    for(int i = 0; i < size_v; i++){
        if(grades[i] < grade){
            counter = counter + 1;
        }
    }
    return counter;
}

std::vector<int> GradeManager::findAllIndices(int grade){
    std::vector<int> new_v;
    int size_v = grades.size();
    for(int i = 0 ; i < size_v; i++){
        if (grades[i] == grade){
            new_v.push_back(i);
        }
    }
    return new_v;
}

int GradeManager::countBelow(int threshold){
    int size_v = grades.size();
    int counter = 0;
    for (int i = 0; i < size_v; i++){
        if(grades[i] == threshold){
            counter = counter + 1;
        }
    }
    return counter;
}

int GradeManager::getSize(){
    int size_v = grades.size();
    return size_v;
}

double GradeManager::getAverage(){
    double size_v = grades.size();
    double total = 0.0;
    if(!grades.empty()){
        for(int i = 0; i < size_v; i++){
            total = total + grades[i];
        }
        double average = total/size_v;
        return average;
    }else{
        return 0;
    }
}
void GradeManager::clearGrades(){
    grades.clear();
}

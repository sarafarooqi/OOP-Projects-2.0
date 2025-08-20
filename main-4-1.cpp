#include <iostream>

int* readNumbers();
int secondSmallestSum(int* numbers, int length);

int main(){
    int* new_array = readNumbers();
    int minimum = secondSmallestSum(new_array, 5);
    std::cout << minimum << std::endl;

    delete[] new_array;
    return 0;

}

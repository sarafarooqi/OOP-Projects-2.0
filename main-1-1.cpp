#include <iostream>
int *readNumbers();
void printNumbers(int *numbers, int length);
int main(){

    int* new_arr = readNumbers();
    printNumbers(new_arr, 10);
    delete[] new_arr;
    return 0;

}

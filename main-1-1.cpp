#include <iostream>
int main(){

    int* new_arr = readNumbers();
    printNumbers(new_arr, 10);
    delete[] new_arr;
    return 0;

}

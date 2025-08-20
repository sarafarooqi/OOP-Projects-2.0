#include <iostream>

int *readNumbers();
void hexDigits(int *numbers, int length);

int main(){
    int *new_numbers = readNumbers();
    hexDigits(new_numbers, 10);
    delete[] new_numbers;
    return 0;

}

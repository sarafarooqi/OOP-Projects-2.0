#include <iostream>

int *readNumbers(){
    int *array = new int[10];
    for(int i = 0; i < 10; i++){
        std::cin >> array[i];
    }
    return array;
}

int *readNumbers();
void hexDigits(int *numbers, int length);

int main(){
    int *new_numbers = readNumbers();
    hexDigits(new_numbers, 10);
    delete[] new_numbers;
    return 0;

}

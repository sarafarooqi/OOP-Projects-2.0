#include <iostream>

int secondSmallestSum(int *numbers, int length){
    int min1 = numbers[0];
    int min2 = numbers[0] + numbers[1];
}
if(min2 < min1){
    
}

int *readNumbers(){
    int *array = new int[10];
    for(int i = 0; i < 10; i++){
        std::cin >> array[i];
    }
    return array;
}

void printNumbers(int *numbers, int length){
    for(int i = 0; i < length; i++){
        std::cout << i << " ";
        std::cout << numbers[i] << " " << std::endl;
    }
}

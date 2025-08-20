#include <iostream>

int *readNumbers(){
    int *array = new int[10];
    for(int i = 0; i < 10; i++){
        std::cin >> array[i];
    }
    return array;
}

void hexDigits(int *numbers, int length){
    for(int i = 0; i < length; i++){
        int hexadecimal;
    

    switch (numbers[i]) {
        case 0:
        hexadecimal = '0';
        break;

        case 1:
        hexadecimal = '1';
        break;

        case 2:
        hexadecimal = '2';
        break;

        case 3:
        hexadecimal = '3';
        break;

        case 4:
        hexadecimal = '4';
        break;

        case 5:
        hexadecimal = '5';
        break;

        case 6:
        hexadecimal = '6';
        break;

        case 7:
        hexadecimal = '7';
        break;

        case 8:
        hexadecimal = '8';
        break;

        case 9:
        hexadecimal = '9';
        break;

        case 10:
        hexadecimal = 'A';
        break;

        case 11:
        hexadecimal = 'B';
        break;

        case 12:
        hexadecimal = 'C';
        break;

        case 13:
        hexadecimal = 'D';
        break;

        case 14:
        hexadecimal = 'E';
        break;

        case 15:
        hexadecimal = 'F';
        break;
    }

    std::cout << i << " " << numbers[i] << " ";
    std::cout << (char)hexadecimal << std::endl;

}

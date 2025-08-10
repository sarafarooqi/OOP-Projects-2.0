#include <iostream>
#include <string>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    int decimal = 0;
    for(int i = 0; i < number_of_digits; i++){
        int digit = binary_digits[i];
        decimal = decimal*2+digit;
    }
    return decimal;
}

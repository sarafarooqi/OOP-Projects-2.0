#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){
    int decimal = stoi(decimal_number);
    std::string binary = " ";

    int remainder;

    while(true){
        remainder = decimal % 2;
        binary.insert(0,std::to_string(remainder));
        if(decimal < 2){
            break;
        }
        decimal = decimal / 2;
    }

    std::cout << binary << std::endl;
}

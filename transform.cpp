#include <iostream>
#include <string>

int main(){
    int decimal;
    std::string binary = " ";

    std::cout << "Enter a decimal: " ;
    std::cin >> decimal;

    int remainder;

    //Run an infinite loop 

    while(true){
        remainder = decimal % 2;
        binary.insert(0,std::to_string(remainder));
        if (decimal < 2){
            break;
        }
        decimal = decimal / 2;
    }

    std::cout<< "Binary: " << binary;

}

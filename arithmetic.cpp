#include <iostream>
#include <string>
using namespace std;

string rightShift(string binary){
    int length_num = binary.length();

    //using string slicing we can just drop the last digit and concatenate by adding
    // a 0 to the front.

    return "0" + binary.substr(0,length_num-1);

    }

string leftShift(string binary){
    int length_num2 = binary.length();

    //using string slicing again we can just add a 0 to the end of the binary number

    return binary.substr(1, length_num2+1) + "0";
}

int main(){
    string binary;

    cout << "Enter a binary: ";
    cin >> binary;

    string r = rightShift(binary);
    string l = leftShift(binary);

    cout << "Right shifted: " << r << endl;
    cout << "Left shifted: " << l << endl;
    
}



#include <iostream>
using namespace std;

bool is_descending(int array[], int n);

int main(){
    int my_array[5] = {10, 13, 9, 3};
    cout << boolalpha << is_descending(my_array, 5) << endl;
    return 0; 
}
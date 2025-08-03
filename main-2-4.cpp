#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main(){
    int new_array[4] = {1,6,4,2};
    cout << boolalpha << is_ascending(new_array, 5) << endl;
    return 0;

}
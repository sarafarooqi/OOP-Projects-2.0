#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main() {
    int my_array[5] = {5,2,1,4,3};
    cout << min_element(my_array, 5) << endl;
    return 0;
}
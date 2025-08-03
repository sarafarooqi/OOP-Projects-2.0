#include <iostream>
using namespace std;

double array_mean(int array[], int n);
int main() {
    int new_array[6] = {1,2,-4,6,8,3};
    cout << array_mean(new_array, 6) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int new_array[5] = {1,3,3,6,8};
    int second_array[5] = {1,3,6,8,9};
    cout << sum_two_arrays(new_array, second_array, 5) << endl;
    return 0;
}
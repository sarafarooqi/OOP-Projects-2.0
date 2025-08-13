#include <iostream>
using namespace std;

int array_sum(int array[], int n);
int main() {
    int new_array[6] = {1,2,-4,6,8,3};
    cout << array_sum(new_array, 3) << endl;
    return 0;
}

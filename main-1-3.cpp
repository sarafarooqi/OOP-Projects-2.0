#include <iostream>
using namespace std;

int num_count(int array[], int n, int number);
int main() {
    int new_array[5] = {1,3,3,6,8};
    cout << num_count(new_array, 5, 3) << endl;
    return 0;
}
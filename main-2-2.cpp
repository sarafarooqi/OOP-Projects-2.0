#include <iostream>
using namespace std;

int max_element(int array[], int n);
int main() {
    int new_array[4] = {8,5,1,2};
    cout << max_element(new_array, 6) << endl;
    return 0;
}
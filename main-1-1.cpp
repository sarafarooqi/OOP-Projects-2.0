#include <iostream>
using namespace std;

int array_sum(int array[], int n){
    if (n < 1){
        return 0;
    }
    int total = 0;
    for (int i = 0; i < n; i++){
        total += array[i];
    }
    return total;  
}
int main() {
    int new_array[6] = {1,2,-4,6,8,3};
    cout << array_sum(new_array, 6) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n){
    if (n < 1){
        return 0.0;
    }
    int total = 0;
    for (int i = 0; i < n; i++){
        total += array[i];
    }
    int total1 = 0;
    for (int x = 0; x < n; x++){
        total1 += secondarray[x];
    }
    int sum = total + total1;
    return sum;
}
int main() {
    int new_array[5] = {1,3,3,6,8};
    int second_array[5] = {1,3,6,8,9};
    cout << sum_two_arrays(new_array, second_array, 5) << endl;
    return 0;
}
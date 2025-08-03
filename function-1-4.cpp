#include <iostream>

int num_sum_two_arrays(int array[], int secondarray[], int n){
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
#include <iostream>
double array_mean(int array[], int n){
    int total = 0;
    if (n < 1){
        return 0;
    }
    for (int i = 0; i < n; i++){
        total = total + array[i];
    }
   double avg = static_cast<double>(total)/n;
    return avg;
}

#include <iostream>
using namespace std;

double sum_even(double array[], int n){
    double sum = 0.0;

    if(n < 1){
        return 0;
    }
    for(int i = 0; i < n; i = i+2){
        sum = array[i] + sum;
        }
    return sum; 
}

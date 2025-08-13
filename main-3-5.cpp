#include <iostream>
using namespace std;

double sum_even(double array[], int n);
int main(){
    double array[] = {1.9, 5.7, 7.1, 9.2, 10.8};
    int n = 5;

    cout << sum_even(array, n);
}

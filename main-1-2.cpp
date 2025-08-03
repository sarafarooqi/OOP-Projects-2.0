#include <iostream>
using namespace std;

double array_mean(int array[], int n){
    int total = 0;
    if (n < 1){
        return 0.0;
    }
    for (int i = 0; i < n; i++){
        total = total + array[i];
    }
   double avg = static_cast<double>(total)/n;
    return avg;
}
int main() {
    int new_array[6] = {1,2,-4,6,8,3};
    cout << array_mean(new_array, 6) << endl;
    return 0;
}
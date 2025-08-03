#include <iostream>
using namespace std;

int num_count(int array[], int n, int number){
    if (n < 1){
        return 0;
    }
    int total = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            total = total + 1;
        }
    }
    return total;
}
int main() {
    int new_array[5] = {1,3,3,6,8};
    cout << num_count(new_array, 5, 3) << endl;
    return 0;
}
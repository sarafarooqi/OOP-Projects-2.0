#include <iostream>
using namespace std;

int count_evens(int number){
    if (number < 1){
        return 0;
    }
    int total = 0;
    for (int i = 1; i < number; i++){
        if (i%2 == 0){
            total = total + 1;
        }
    }
    return total;
}
int main() {
    cout << count_evens(5) << endl;
    return 0;
}
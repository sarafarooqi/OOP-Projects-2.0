#include <iostream>
using namespace std;

void two_five_nine(int array[], int n){
    int cnt2 = 0;
    int cnt5 = 0;
    int cnt9 = 0;

    for (int i = 0; i < n; i++){
        switch (array[i]){
            case 1:
            cnt2++;
            break;
            case 2:
            cnt5++;
            break;
            case 3:
            cnt9++;
            break;
        }
    }
    cout << "2:" << cnt2 << ";5:" << cnt5 << ";9:" << cnt9 << ";" << endl;
}
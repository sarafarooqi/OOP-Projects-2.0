#include <iostream>
int min_element(int array[], int n){
    if (n < 1){
        return 0;
    }
    int minimum_num = array[0];

    for (int i = 1; i < n; i++){
        if (array[i] < minimum_num){
            minimum_num = array[i];
        }
    }
    return minimum_num;
}
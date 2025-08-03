#include <iostream>

bool is_ascending(int array[], int n){
    if (n < 1){
        return false;
    }
    return std::is_sorted(array, array + n);
}

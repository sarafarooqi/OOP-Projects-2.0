#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){
    int end = n-1;

    if(n < 1){
        return false;
    }

    //For an odd length palindrome, the middle number before the repeating needs to be larger than the element before it
    if(n%2 == 1){
        int half = n/2;
        if(array[half] <= array[half-1]){
            return false;
        }
    }

    //Only checking to the middle so divide length by 2
    for(int i = 0; i < n/2; i++){
        if (array[i] != array[end]){
            return false;
        }
        end--;
    }

    //To check if sorted in ascending order(only the half matters since for it to be a palindrome it must repeat)
    for(int k = 1; k <n/2; k++){
        if (array[k] <= array[k-1]){
            return false;
        }
    }

    return true;
}

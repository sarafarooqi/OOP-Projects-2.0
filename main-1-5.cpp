#include <iostream>
#include <vector>
using namespace std;

void print_scaled(int array1[3][3], int array2[3][3]);

int main(){
    int array1[3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3},
    };

    int array2[3][3] = {
        {4,5,6},
        {6,5,4},
        {1,4,5},
    };
    print_summed(array1, array2);
    return 0;

}

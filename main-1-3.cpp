#include <iostream>
#include <vector>
using namespace std;
void count_digits(int array[4][4]);

int main(){
    int matrix[4][4] = {
        {1, 3, 5, 7},
        {0, 1, 5, 0},
        {2, 7, 8, 4},
        {2, 7, 1, 0}
    };

    count_digits(matrix);
    return 0;
}

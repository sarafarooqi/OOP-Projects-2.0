#include <iostream>
#include <vector>
using namespace std;

void print_scaled(int array[3][3], int scale);
int main(){
    int scale;
    int matrix[3][3]= {
        {1,2,3},
        {0,9,7},
        {8,6,5},
    };
    cout << "Enter a scale: ";
    cin >> scale;
    print_scaled(matrix, scale);
    return 0;
}

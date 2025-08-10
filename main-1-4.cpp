#include <iostream>
#include <vector>
using namespace std;

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

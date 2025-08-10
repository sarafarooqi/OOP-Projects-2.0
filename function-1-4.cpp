#include <iostream>
#include <vector>
using namespace std;

void print_scaled(int array[3][3], int scale){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            array[i][j] = array[i][j]*scale;
         }

    }
    for (int k = 0; k < 3; k++){
        for (int c = 0; c < 3; c++){
            cout << array[k][c] << " ";
        }
        cout << endl;
    }

}

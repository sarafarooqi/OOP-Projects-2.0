#include <iostream>
#include <vector>
using namespace std;

void print_summed(int array1[3][3], int array2[3][3]){
    int new_array[3][3];

        
        for(int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                new_array[i][j] = array1[i][j] + array2[i][j];
            }
        }

        for (int c = 0; c < 3; c++){
            for (int k = 0; k < 3; k++){
                cout << new_array[c][k] << " ";
            }
            cout << endl;
        }
}

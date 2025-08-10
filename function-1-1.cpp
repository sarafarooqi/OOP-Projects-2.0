#include <iostream>
#include <vector>
using namespace std;

int sum_diagonal(int array[4][4]){
    int num = 0;
    for(int i = 0; i < 4; i++){
        num += array[i][i];  
    }
    return num;
}

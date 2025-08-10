#include <iostream>
#include <vector>
using namespace std;

int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {
        {1, 3, 4, 6},
        {5, 7, 9, 10},
        {3, 4, 4, 3},
        {6, 7, 9, 8}

    };
    cout<<sum_diagonal(array)<<endl;
    return 0;

}

#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main(){
    int array[] = {1,5,9,8};
    int n = 4;

    cout << boolalpha << is_fanarray(array, n);
}

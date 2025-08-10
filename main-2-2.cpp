#include <iostream>
#include <string>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits);
int main(){
    int array1[] = {1,1,0,0,0,1,0,1,0,1,0,1,1};
    cout<<binary_to_int(array1, 13)<<"\n";
}

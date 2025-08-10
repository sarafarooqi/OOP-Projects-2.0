#include <iostream>
#include <string>
using namespace std;

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main(){
    int array1[] = {5, 10, 1, 7, 3};
    int length = 5;
    cout<<sum_min_max(array1, length)<<endl;
    return 0;
}

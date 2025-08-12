#include "workshop.h"
using namespace std;


int main(){
    //Part 2
    numbers_1();

    //Part 3
    double arr[] = {1.0, 2.1, 4.5, 6.0};
    int size1 = 4;

    printArray(arr, size1);
   
    //Part 4
    double array[] = {5.6, 7.9, 1.0, 0.6};
    int size2 = 4;

    arrayMax(array, size2);

    //Part 5
    int n = 5;
    double* array1 = dynamicArray(n);

    for(int k = 0; k < n; k++){
        cout << array1[k] << " ";
    }
    cout<<endl;

    // Part 7
    int n1 = 5;
    double m = 3.8;
    double* array2 = dynamicArray(n1,m);

    for(int k = 0; k < n; k++){
        cout << array2[k] << " ";
    }
    cout<<endl;

    return 0;
}

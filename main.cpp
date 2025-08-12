#include "workshop.h"
using namespace std;


int main(){
    //Part 2
    double num = 0;

    changeValue(&num);
    cout<<"Value of num: "<<num<<endl;
    return 0;

    //Part 3
    double arr[] = {1.0, 2.1, 4.5, 6.0};
    int size1 = 4;

    printArray(arr, size1);
   
    //Part 4
    double array[] = {5.6, 7.9, 1.0, 0.6};
    int size2 = 4;

    arrayMax(array, size2);

    //Part 5
    int N = 5;
    double* array1 = dynamicArray(N);

    for(int k = 0; k < N; k++){
        cout << array1[k] << " ";
    }
    cout<<endl;

    // Part 7
    int n1 = 5;
    double M = 3.8;
    double* array2 = dynamicArray(n1,M);

    for(int k = 0; k < n1; k++){
        cout << array2[k] << " ";
    }
    cout<<endl;

    return 0;
}

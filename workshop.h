#include <iostream>
using namespace std;

//Part 2
void changeValue(double* nums){
    *nums = 42;
    double num;

    nums = &num;
}

//When passing a pointer to a function, it changes the value of the original variable that the pointer points to
/*If you passed just a double, the function would take in a copy of the variable. It wouldn't change the original 
value if it exists outside the function.*/

//Part 3
void printArray(double* arr, int size_arr){
    for(int i = 0; i < size_arr; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

/*You can pass an array as a function in c++ by passing it as a pointer because the pointer 
points to the address of only the element at index 0. The size is needed because the function needs to know
how big the array is.*/

//Part 4
double arrayMax(double* array, int size){
    double max = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}
/*The reason it returns a double is because the code asks for the max value in the array, 
it doesn't ask for the address of the largest value in the array. */

//Part 5
double* dynamicArray(int N){
    double* array1 = new double[N];
    for(int i = 0; i < N; i++){
        array1[i] = i;
    }
    return array1;
}
/*We have to return a pointer from the function because in c++, the array can't be returned by value,
it needs the address and the pointer gives that. */

//Part 7
double* dynamicArray(int N, double M){
    double* array1 = new double[N];

    for(int i = 0; i < N; i++){
        array1[i] = M;
    }
    return array1;
}
/*When initializing M, it gets rid of any filler values that the program filled the array with and the practical 
implication is that the array will have meaningful and predictable values that user can use.*/

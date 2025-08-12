#include <iostream>
using namespace std;

//Part 2
void changeValue(double* p){
    *p = 42;
}

void numbers_1(){
    double num;

    cout << "Enter a number: ";
    cin >> num;

    double *n;

    n = &num;

    changeValue(n);

    cout<<"Value of num: "<<*n<<endl;
} 

//Part 3
void printArray(double* arr, int size_arr){
    for(int i = 0; i < size_arr; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

//Part 4
double arrayMax(double* array, int size){
    
    if (size <= 0){
        return -1;
    }
    double max = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] > max){
            max = array[i];
        }
    return max;
    }
}

//Part 5
double* dynamicArray(int n){
    double* array1 = new double[n];
    for(int i = 0; i < n; i++){
        array1[i] = i;
    }
    return array1;
}

//Part 7
double* dynamicArray(int n, double m){
    double* array1 = new double[n];

    for(int i = 0; i < n; i++){
        array1[i] = m;
    }
    return array1;
}

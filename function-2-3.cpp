#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int integers[], int length){
    int start = 0;
    int end = length-1;
    while(start < end){
        if(integers[start] != integers[end]){
            return false;
        }
        start = start + 1;
        end = end -1;
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    int total = 0;
    for(int i = 0; i < length; i++){
        total = total + integers[i];
    }
    return total;
}


int sum_if_palindrome(int integers[], int length){
    if(is_palindrome(integers, length)){
        return sum_array_elements(integers, length);
    }
    else{
        return -2;
    }
}

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main(){
    int array1[] = {1,2,2,1};
    cout<<sum_if_palindrome(array1,4)<<endl;

}


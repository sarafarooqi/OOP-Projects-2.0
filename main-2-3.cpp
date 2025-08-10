#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main(){
    int array1[] = {1,2,2,1};
    cout<<sum_if_palindrome(array1,4)<<endl;

}


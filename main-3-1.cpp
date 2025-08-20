#include <iostream>
bool equalsArray(int *numbers1, int *numbers2, int length);
int *readNumbers();

int main(){
    int *array1 = readNumbers();
    int *array2 = readNumbers();

    bool result = equalsArray(array1, array2, 10);

    if(result){
        std::cout << "true" << std::endl;
        } 
        else{
            std::cout << "false" << std::endl;
        }
    

    delete[] array1;
    delete[] array2;

    return 0;
}

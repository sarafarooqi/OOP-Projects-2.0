#include <iostream>

bool equalsArray(int *numbers1, int *numbers2, int length){
    if (length > 0){
        for(int i = 0; i < length; i++){
            while(numbers1[i] != numbers2[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}

int *readNumbers(){
    int *array = new int[10];
    for(int i = 0; i < 10; i++){
        std::cin >> array[i];
    }
    return array;
}

int *readNumbers();
bool equalsArray(int* numbers1, int* numbers2);
int* reverseArray(int* numbers1, int length);

int main(){
    int length = 10;
    int* array1 = readNumbers();
    int* reverse_arr = reverseArray(array1, length);

    std::cout << "Reversed:";

    for(int i = 0; i < length; i++){
        std::cout << reverse_arr[i] << " ";
    }
    std::cout << std::endl;

    bool result = equalsArray(array1, reverse_arr, length);

    if(result){
        std::cout<<"true"<<std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    delete[] array1;
    delete[] reverse_arr;

    return 0;

}

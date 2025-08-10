#include <iostream>
#include <vector>
using namespace std;

void count_digits(int array[4][4]){
    int num_zero = 0, num_one = 0, num_two = 0, num_three = 0, num_four = 0, num_five = 0, num_six = 0, num_sev = 0, num_eight = 0, num_nine = 0;
    int output[10] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(array[i][j] == 0){
                num_zero = num_zero + 1;
            }
            if(array[i][j] == 1){
                num_one = num_one + 1;
            }
            if(array[i][j] == 2){
                num_two = num_two + 1;
            }
            if(array[i][j] == 3){
                num_three = num_three + 1;
            }
            if(array[i][j] == 4){
                num_four = num_four + 1;
            }
            if(array[i][j] == 5){
                num_five = num_five + 1;
            }
            if(array[i][j] == 6){
                num_six = num_six + 1;
            }
            if(array[i][j] == 7){
                num_sev = num_sev + 1;
            }
            if(array[i][j] == 8){
                num_eight = num_eight + 1;
            }
            if(array[i][j] == 9){
                num_nine = num_nine + 1;
            }
        }
    }

   cout << "0:" << num_zero  << ";" << "1:" << num_one << ";" << "2:" << num_two << ";" << "3:" << num_three << ";" << "4:" << num_four << ";" << "5:" << num_five << ";" << "6:" << num_six << ";" << "7:" << num_sev << ";" << "8:" << num_eight << ";" << "9:" << num_nine << ";\n";
}

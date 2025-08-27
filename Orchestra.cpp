#include "Orchestra.h"
#include <iostream>
#include <string>


Orchestra::Orchestra(){
    Max = 0;
    Size = 0;
    members = nullptr;
}

Orchestra::Orchestra(int size){
    Max = size;
    Size = 0;
    if (size > 0){
        members = new Musician[size];
    }else{
        members = nullptr;
    }
    
}

int Orchestra::get_current_number_of_members(){
    return Size;
}

bool Orchestra::has_instrument(std::string instrument){
    for(int i = 0; i < Size; i++){
        if(members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}
Musician *Orchestra::get_members(){
    return members;
}

bool Orchestra::add_musician(Musician new_musician){
    if(Size >= Max){
        return false;
    }else{
        members[Size] = new_musician;
        Size++;
        return true;
    }  
}
Orchestra::~Orchestra(){
delete[] members;
}

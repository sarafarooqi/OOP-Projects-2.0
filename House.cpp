#include "House.h"


    House::House(){
    }
    House::House(int numAppliances){
        counter = 0;
        capacity = numAppliances;

        if (capacity > 0){
            appliances = new Appliance*[capacity];
            for(int i = 0; i < capacity; i++){
                appliances[i] = nullptr;
            }

        }else{
            appliances = nullptr;
        }
    }

    bool House::addAppliance(Appliance *a){
        if(counter >= capacity){
            return false;
        }
        appliances[counter] = a;
        counter++;
        return true;
    }

    double House::getTotalPowerConsumption(){
        double total = 0.0;

        for(int i = 0; i < counter; i++){
            total += appliances[i] ->getPowerConsumption();
        }
        return total;
    }

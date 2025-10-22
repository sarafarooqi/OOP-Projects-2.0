#include <iostream>
#include <vector>
#include "RecordManager.h"

int main() {

    RecordManager rm;

    // Add some records
    int id1 = rm.addRecord(85);
    int id2 = rm.addRecord(72);
    int id3 = rm.addRecord(90);

    std::cout << "IDs assigned: " << id1 << ", " << id2 << ", " << std::endl;
    std::cout << "Size: " << rm.getSize() << std::endl;
    std::cout << "Average: " << rm.getAverage() << std::endl;

}

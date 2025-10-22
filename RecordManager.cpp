#include "RecordManager.h"
#include <iostream>

int RecordManager::nextStudentID = 10001;
int RecordManager::totalRecordsCreated = 0;

RecordManager::RecordManager(){
}

int RecordManager::generateNextID(){
    int id = nextStudentID++;
    ++totalRecordsCreated;
    return id;
}

int RecordManager::addRecord(int grade){
    int next = generateNextID();
    records.emplace_back(next, grade);
    return next;
}

void RecordManager::removeRecord(int studentID){
    for(int i = 0; i < records.size(); i++){
        if(records[i].first == studentID){
            records.erase(records.begin() + i);
            return;
        }
    }
}

bool RecordManager::updateGrade(int studentID, int newGrade){
    for(int i = 0; i < records.size(); i++){
        if(records[i].first == studentID){
            records[i].second = newGrade;
            return true;
        }
    }
    return false;
}

int RecordManager::getGrade(int studentID){
    for(auto& record: records){
        if (record.first == studentID){
            return record.second;
        }
    }
    return -1;
}
std::pair<int, int> RecordManager::getRecord(int studentID){
    for(auto& record: records){
        if(record.first == studentID){
            return record;
        }
    }
    return {-1, -1};
}

std::vector<int> RecordManager::findRecordsByGrade(int grade){
    std::vector<int> matching;
    for(auto& record:records){
        if(record.second == grade){
            matching.push_back(record.first);
        }
    }
    return matching;
}

int RecordManager::countRecordsBelow(int threshold){
    int counter = 0;

    for(auto& record:records){
        if(record.second < threshold){
            counter++;
        }
    }
    return counter;
}

std::vector<std::pair<int, int>> RecordManager::getRecordsAbove(int threshold){
    std::vector<std::pair<int, int>> highResult;

    for(auto& record:records){
        if(record.second > threshold){
            highResult.push_back(record);
        }
    }
    return highResult;
}

int RecordManager::getSize(){
    return records.size();
}

double RecordManager::getAverage(){
    int size_v = records.size();
    if(size_v == 0){
        return 0.0;
    }
    int total = 0;
    for (auto& record:records){
        total += record.second;
    }
    int counter = records.size();
    double average = static_cast<double>(total)/counter;
    return average;
}

int RecordManager::getTotalRecordsCreated(){
    return totalRecordsCreated;
}

int RecordManager::getNextStudentID(){
    return nextStudentID;
}

void RecordManager::clearAllRecords(){
    records.clear();
}

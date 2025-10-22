#include "BrowserHistory.h"
#include <iostream>

BrowserHistory::BrowserHistory(){
    currentPage = "home page"; //initial page
}

void BrowserHistory::visitPage(std::string url){
    backHistory.push(currentPage);
    currentPage = url;
}

void BrowserHistory::goBack(){
    if (backHistory.empty()){
        return;
    }
    std::string priorPage = backHistory.top();
    backHistory.pop();
    currentPage = priorPage;
}

bool BrowserHistory::canGoBack(){
    return !backHistory.empty();
}

std::string BrowserHistory::getCurrentPage(){
    return currentPage;
}

int BrowserHistory::getBackHistorySize(){
    return static_cast<int>(backHistory.size());
}

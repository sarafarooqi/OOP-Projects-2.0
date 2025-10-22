#include <iostream>
#include "BrowserHistory.h"

int main(){

    BrowserHistory history;

    std::cout << "Current Page: " << history.getCurrentPage()<< std::endl;
    std::cout << "Go back?: " << history.canGoBack() << std::endl;

}

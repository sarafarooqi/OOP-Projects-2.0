#include "Invoice.h"
#include <string.h>

 Invoice::Invoice(string invoiceId){
        this->invoiceId = invoiceId;
        this->dollarsOwed = 0;
    }

    void Invoice::addServiceCost(int costDollars){
        if (costDollars > 0){
            dollarsOwed = dollarsOwed + costDollars;
        }
    }

    int Invoice::getDollarsOwed(){
        return dollarsOwed;
    }

    string Invoice::getInvoiceId(){
        return invoiceId;
    }

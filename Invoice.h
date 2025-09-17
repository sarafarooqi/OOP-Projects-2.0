#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;

class Invoice{
    public:
    string invoiceId;
    int dollarsOwed = 0;

    public:
    Invoice(string invoiceId);

    void addServiceCost(int costDollars);

    int getDollarsOwed();

    string getInvoiceId();
};

#endif

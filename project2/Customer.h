#include <string>
#include <iostream>
using namespace std;


#ifndef _Customer_h
#define _Customer_h
class Customer{
    public:
        Customer(string name, int arr[], int len);
        Customer(){
            customerName = "";
            for(int i = 0; i < 50; i++){
                purchases[i] = 0;
            }
        }
        string getCustomerName();
        int getPurchasesAt(int);
        int getSize();
        int getNumUniquePurchases();
        int getTotalPurchaseCount();
        void setCustomerName(string);
        bool setPurchasesAt(int, int);
    private:
        string customerName;
        static const int purchases_size = 50;
        int purchases[50];
};

extern int split_customer(string text, char sep, string arr[], int size );
extern bool checker(string first, string second);
#endif
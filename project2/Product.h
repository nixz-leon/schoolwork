#include <iostream>
#include <string>
using namespace std;

#ifndef _Product_h
#define _Product_h
class Product
{
public:
    Product(string na = "", double pr = 0.0, string cat = "");
    // default and paramterized constructor wrapped into one, by having default arguments,
    string getName();
    double getPrice();
    string getCategory();
    void setName(string);
    void setPrice(double);
    void setCategory(string);


private:
    string name;
    double price;
    string category;
};
extern int split(string text, char sep, string arr[], int size );
#endif
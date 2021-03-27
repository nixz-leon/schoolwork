#include <iostream>
#include <string>
using namespace std;

#ifndef _Product_h
#define _Product_h
class Product
{
public:
    Product(string na = "", double pr = 0.0, string cat = "");
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
#endif
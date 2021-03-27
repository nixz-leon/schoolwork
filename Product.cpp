#include "Product.h"

string Product::getName(){
    return name;
}
double Product::getPrice(){
    return price;
}
string Product::getCategory(){
    return category;
}
void Product::setName(string input){
    name = input;
}
void Product::setPrice(double input){
    price = input;
}
void Product::setCategory(string input){
    category = input;
}    
Product::Product(string na, double pr, string cat){
    name = na;
    price = pr;
    category = cat;
}

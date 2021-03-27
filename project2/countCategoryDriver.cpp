#include "readProductsDriver.cpp"

int countCategory(string Cat, Product products[], int Num_Stored){
    int count = 0;
    for(int i = 0; i < Num_Stored; i++){
        string curr_cat = products[i].getCategory();
        if(curr_cat == Cat){
            count++;
        }
    }
    return count;
}

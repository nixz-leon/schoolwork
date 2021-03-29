
#include "Customer.h"
#include "Product.h"


bool checker(string first, string second){
    string temp_1 = ""; 
    string temp_2 = "";
    for(int i = 0; i< first.size(); i ++){
        if(first[i] != ' '){
            if(isdigit(first[i])){
                temp_1 += first[i];
            }else{
                temp_1 += tolower(first[i]);
            }
        }
    }
    for(int i = 0; i< second.size(); i ++){
        if(second[i] != ' '){
            temp_2 += tolower(second[i]);
        }else if(isdigit(second[i])){
            temp_1 += second[i];
        }
    }
        // the above loops convert all the chars to lower case, and removing spaces
    if(temp_1 == temp_2){
        return true;
    }else{
        return false;
    }
}

int getPurchasedQuantity(string cust_name, string prod_name, Customer arr_1[], Product arr_2[], int size_del_customer, int size_del_products){
    bool cond_1 = false;
    bool cond_2 = false;
    int index;
    int cust_num;
    for(int i = 0; i < size_del_customer; i++){
        string temp_name = arr_1[i].getCustomerName();
        if(temp_name != ""){
            if(checker(cust_name, temp_name)){
                cond_1 = true;
                cust_num = i;
            }
        }
    }
    for(int j = 0; j < size_del_products; j++){
        string temp_name = arr_2[j].getName();
        if(temp_name != ""){
            if(checker(prod_name, temp_name)){

                cond_2 = true;
                index = j;
            }
        }

    }
    // both these go through the respective arrs, and from there finds the match and sets the index and a condition to true
    // if both are true it means it matched both, and from there it returns the purchases of that customer of that product
    if(cond_1 && cond_2){
        return arr_1[cust_num].getPurchasesAt(index);
    }else{
        return -3;
    }
}

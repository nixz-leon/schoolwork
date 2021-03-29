#include "Customer.h"



bool checker_customer(string first, string second){
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


int addCustomer(string name, Customer arr[], int num_Products, int num_Customers_stored, int Customer_Array_Size){
    if(num_Customers_stored >= Customer_Array_Size){
        return -2;
    }
    if(name == ""){
        return -1;
    }
    // first checking to see if it will fit and exist
    bool cond_1 = false;
    int index =0;
    for(int i = 0; i < num_Customers_stored; i ++){
        string temp_name = arr[i].getCustomerName();
        if(temp_name != ""){
            if(checker_customer(name, temp_name)){
                cond_1 = true;
            }else{
                // as long as long as the name doesn't come up, then adding one to the index of where the name is 
                index++;
            }
        }
    }
    if(cond_1){
        // returns -1 if the name is found
        return  -1;
    }
    // since the default customer constructor already sets everything to 0 we just need to assign this new customer at desired index
    Customer temp_customer;
    temp_customer.setCustomerName(name);
    arr[index] = temp_customer;
    num_Customers_stored++;
    // returns the new total
    return num_Customers_stored;
}


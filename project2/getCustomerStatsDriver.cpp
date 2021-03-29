#include "Customer.h"
#include <iomanip>



bool checker_for_stats_driver(string first, string second){
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
    if(temp_1 == temp_2){
        return true;
    }else{
        return false;
    }
}

int getCustomerStats(string name, Customer arr[], int cust_stored, int prods_stored){
    bool exists = false;
    int cust_index = 0;
    for(int i = 0; i < cust_stored; i++){
        string temp_name = arr[i].getCustomerName();
        if(checker_for_stats_driver(temp_name, name)){
            exists = true;
            cust_index = i;
        }
    }
    if(!exists){
        cout << name << " does not exist" << endl;
        return -3;
    }
    int total_purchase_count = arr[cust_index]. getTotalPurchaseCount();
    int amount_purchases  = arr[cust_index].getNumUniquePurchases();
    if(total_purchase_count ==0 || amount_purchases == 0){
        cout << name << " has not purchased any products" << endl;
        return 0;
    }else{
        double avg = (double)total_purchase_count/amount_purchases;
        cout << fixed << setprecision(2);
        cout << name << " purchased " << amount_purchases << " products" << endl;
        cout << name << "'s average purchased quantity was " << avg << endl;
        return 1;
    }
}
#include "Customer.h"

#define MODULE_UNIT_TEST 0

Customer::Customer(string name, int arr[], int len){
    customerName = name;
    if(len <= purchases_size){
        for(int i = 0; i < len; i++){
            purchases[i] = arr[i];
        }
        for(int i = len; i < purchases_size; i++){
            purchases[i] = 0;
        }
    }else{
        for(int i = 0; i < purchases_size; i++){
            purchases[i] = arr[i];
        }
    }
}

string Customer::getCustomerName(){
    return customerName;
}
int Customer::getPurchasesAt(int index){
    if(index >= 0 && index < 50){
        return purchases[index];
    }else{
        return -1;
    }
}
int Customer::getSize(){
    return purchases_size;
}
int Customer::getNumUniquePurchases(){
    int count = 0;
    for(int i = 0; i < purchases_size; i++ ){ 
        if(purchases[i] > 0){
            count++;
        }
    }
    return count;
}
int Customer::getTotalPurchaseCount(){
    int total = 0;
    for(int i = 0; i < purchases_size; i++){
        total += purchases[i];
    }
    return total;
}
void Customer::setCustomerName(string name){
    customerName = name;
}
bool Customer::setPurchasesAt(int index, int value){
    if(index >=0 && index < 50){
        if(value >0){
            purchases[index] = value;
            return true;
        }else{
            return false;
        }
    }
    return false;
}


#if (MODULE_UNIT_TEST == 1)
int main(){
    Customer temp;
    int arr[60] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout << temp.getTotalPurchaseCount() << " " <<temp.getNumUniquePurchases() << endl;
    Customer temp2 = Customer("Barbra", arr, 60);
    cout << temp2.getCustomerName() << " " << temp2.getTotalPurchaseCount() << endl;
}
#endif // MODULE_UNIT_TEST == 1)
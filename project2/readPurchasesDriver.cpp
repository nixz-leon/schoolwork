#include "Customer.h"
#include <fstream>
#include "split.h"


#define MODULE_UNIT_TEST 0


int readPurchases(string filename, Customer arr[], int numCustomersStored, int custArrsize, int maxCol){
    // we return 2 if there isn't more space to add things to
    if(numCustomersStored >= custArrsize){
        return -2;
    }
    // then we check to see whether the file is real
    ifstream file;
    file.open(filename);
    if(file.fail()){
        return -1;
    }
    int count = 0;
    string line;
    while(getline(file, line)){
        if(line != "" ){
            // this if statment is to check whether or not there is space and if so to add the next item
            if(count + numCustomersStored < custArrsize){
                string temp[maxCol];
                int cols = split(line, ',', temp, maxCol);
                arr[numCustomersStored+count].setCustomerName(temp[0]);
                for(int i = 1; i < cols; i++ ){
                    int temp_val = stoi(temp[i]);
                    arr[numCustomersStored+count].setPurchasesAt(i-1, temp_val);
                }
                count ++;
            }  
        }
    }
    file.close();
    // it then returns the new total
    return (count + numCustomersStored);
}

#if (MODULE_UNIT_TEST == 1)

int main(){
    Customer arr[100];

    readPurchases("purchases.txt", arr, 0, 100, 51);
    cout << arr[39].getCustomerName() << endl;
}

#endif // MODULE_UNIT_TEST == 1)
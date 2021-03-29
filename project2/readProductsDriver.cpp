

#include "Product.h"
#include "split.h"
#include <fstream>



//File name is the name of the file
//arr is the array of products noted in homework limit of size 50
//numProductsStored is the number of products in arr before passed through
//size is the max size of the arr
//goal if function read in a file and store it into the arr
int readProducts(string filename, Product arr[], int numProductsStored, int size){

    // we return 2 if there isn't more space to add things to
    if(numProductsStored == size){
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
            if(count + numProductsStored < size){
                string temp[3];
                split(line, ',', temp, 3);
                double  price =  stod(temp[1]);
                Product temp_item = Product(temp[0], price, temp[2]);
                arr[numProductsStored + count]  = temp_item;
                count ++;
            }  
        }
    }
    file.close();
    // it then returns the new total
    return (count + numProductsStored);
}

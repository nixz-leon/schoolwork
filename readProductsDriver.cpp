#include "Product.h"
#include <fstream>

int split(string text, char sep, string arr[], int size ){
    int counter = 0;
    string temp = "";
    int textlenght = text.length();
    if(textlenght == 0){
        //edge case
        return 0;
    }
    for(int i =0; i < textlenght; i++){
        if(text[i] == sep){
            // condition to let me still assign the last section
            if(counter < (size-1)){
                // resets temp based on whether it see identifier
                arr[counter] = temp;
                counter++;
                temp = "";
            }else{
                // if it goes outof bounds it still assigns the temp to the last slot
                arr[counter] = temp;
                return -1;
            }
        }else{
            // adds the characters to temp
            temp += text[i];
        }
    }
    //makes sure last section gets assigned
    arr[counter] = temp;
    return counter + 1;
}

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

#include "Product.h"

bool checker_category(string first, string second){
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

int countCategory(string Cat, Product products[], int Num_Stored){
    int count = 0;
    for(int i = 0; i < Num_Stored; i++){
        string curr_cat = products[i].getCategory();
        if(checker_category(curr_cat, Cat)){
            // checks if the cat matches if so adds one to the count
            count++;
        }
    }
    return count;
}

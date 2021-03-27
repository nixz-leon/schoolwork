#include <iostream>
#include <string>
using namespace std;


bool checker(string first, string second){
    string temp_1 = ""; 
    string temp_2 = "";
    for(int i = 0; i< first.size()-1; i ++){
        if(first[i] != ' '){
            temp_1 += tolower(first[i]);
        }
    }
    for(int i = 0; i< second.size()-1; i ++){
        if(second[i] != ' '){
            temp_2 += tolower(second[i]);
        }
    }
    if(temp_1 == temp_2){
        return true;
    }else{
        return false;
    }
}


int main(){
    cout << checker("BeN BOY", "bEn boy") << endl;
    return 0;
}
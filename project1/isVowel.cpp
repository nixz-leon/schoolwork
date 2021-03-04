// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 2

#include <iostream>
#include <string>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}
//template finds the length of a matrix, pretty neat didn't need it, but doesn't  increase run time


bool isVowel(char letter){
    char lower[5] = {'a','e','i','o','u'};
    char upper[5] = {'A','E','I','O','U'};
    bool verification = false;
    for(int i = 0; i < len(upper); i++){
        if( letter == upper[i]){
            verification = true;
        }else if (letter == lower[i]){
            verification = true;
        }
        //the two statements are there for both possible cases, when the letter is upper case or the letter is lower case 
    }
    return verification;

} 

int main(){
    char a;
    cin >> a;
    cout << isVowel(a);
    return 0;
}
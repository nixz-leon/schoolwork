// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 3

#include <iostream>
#include <string>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}

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
    }
    return verification;

} 

int numVowels(string sentence){
    int length = sentence.size();
    int num_vowels = 0;
    for(int i = 0; i < length; i++){
        //for loop goes through the sentence char by char and then passes it throw the vowel check, which returns either true or false, if true 1 is added to the count
        bool condition = isVowel(sentence[i]);
        if(condition){
            num_vowels ++;
        }
    }
    return num_vowels;
}
// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 8

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}

string generateSequence(int num){
    string suits[4] = {"C", "D", "H", "S" };
    string numbs[13] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};
    string seq;
    for(int i = 0; i < num; i++){
        int index1 = rand() % len(suits);
        int index2 = rand() % len(numbs);
        // here we are generating random numbers within the range of the two different matrices
        string temp = suits[index1] + numbs[index2];
        // the following for loop checks for repeating cards, and if a repeated card is spoted then, it generates a new random card
        for(int i = 0; i < seq.size(); i+=2){
            if(seq[i] == temp[0] && seq[i+1] == temp[1]){
                index1 = rand() % len(suits);
                index2 = rand() % len(numbs);
                temp = suits[index1] + numbs[index2];
            }
        }
        seq += temp;
    }
    return seq;
}


int main(){
    generateSequence(6);
    return 0;

}
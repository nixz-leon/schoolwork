// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 9

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}

string cardsShuffle(string orgseq){
    string tempseq = "";
    while(orgseq.size() > 2){
        int index = 2 * (rand() % (orgseq.size()/2));
        // what this line does if first it finds the num of cards, by dividing by two, then by taking what ever the rand spits out and using % we can get it in range 0- numb of cards
        // from there all we have to do is then multiple by two to find the correct starting index, thus providing a random card
        tempseq.append(orgseq, index, 2);
        //adds the randomly picked card to the temp sequence
        orgseq.erase(index, 2);
        //removes the card as an option
     }
     tempseq.append(orgseq);
     // this adds the last remaining card to the temp sequence, to then be shuffled
     return tempseq;
}

int main(){
    srand(time(0));
    cout << cardsShuffle("STD5D2H4D8H5") << endl;
}
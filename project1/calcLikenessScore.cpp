// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 4

#include <iostream>
#include <string>
using namespace std;


// likeness score formula = (suited/num of cards ) + (complete matches)
double calcLikenessScore(string first, string second){
    double score = 0;
    int str_length = first.size();
    int numOfcards = str_length/2;
    //this finds the total number or cards, since each card is composed of two strings, we just divide the total length by t wo
    int compare = second.size();
    if(str_length == compare){
        for(int i = 0; i < str_length; i+= 2){
            if(first[i] == second[i]){
                if(first[i+1] == second[i+1]){
                    score += 1 + ((double)1)/((double)numOfcards);
                    // this works because in this senerio, we would have to add  1, but also add the portion to the fraction component of the equation
                }else{
                    score += ((double)1)/((double)numOfcards);
                }
                //just adding it portion by portion example:    6/16 = 2/16+ 2/16+ 2/16
            }
        }
        return score;
    }else{
        //returns negative 1 as an error
        return -1.0;
    }
}
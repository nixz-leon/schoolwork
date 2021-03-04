// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 6

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


double bestLikenessScore(string first, string second){
    int size1 = first.size();
    int size2 = second.size();
    double bestscore = 0;
    if(size1 == size2) {
        return calcLikenessScore(first, second);
        // if they are the same length there is only going to be one score, this reduces complexity, slightly
    }else if(size1 > size2){
        for(int i = 0; i < (size1-size2+1); i+=2){
            //the term size1- size2 is meant to prevent the second for  loop from going out of index
            string subseq = "";
            for(int j = 0; j < size2; j++){
                char tempchar = first[i+j];
                subseq += (tempchar);
                // this just creates the substring, j is a repersation of the length the golden seq, with that being added to i, to give a seq of the proper length
            }
            double tempscore = calcLikenessScore(subseq, second);
            if(tempscore > bestscore){
                bestscore = tempscore;
                // this is just a replacement loop
            }
        }
        return bestscore;
    }else{
        //returns -1.0 as an error
        return -1.0;
    }
}

void findWinner(string first, string second, string third, string target){
    double score1 = bestLikenessScore(first, target);
    double score2 = bestLikenessScore(second, target);
    double score3 = bestLikenessScore(third, target);
    if(score1 == score2 && score2 == score3){
        //when they are all the same you will only need to check if it's 0, otherwise they all win
        if(score1 == 0){
            cout << "Better luck next time everyone!" << endl; 
        }else{
            cout << "Congratulations everyone! You have all won!" << endl;
        }
    }else if((score1 == score2 && score1 > score3) || (score2 == score3 && score2 > score1) || (score1 == score3 && score1 > score2)){
        // check for equality and that the two terms are higher than the one unequal term
        if(score1 == score2){
            cout << "Congratulations Players 1 and 2! You have won!" << endl;
        }else if(score2 == score3){
            cout << "Congratulations Players 2 and 3! You have won!" << endl;
        }else{
            cout << "Congratulations Players 1 and 3! You have won!" << endl;
        }
    }else if(score1 > score2 && score1 > score3 ){
        cout << "Congratulations Player 1! You have won!" << endl;
    }
    else if(score2 > score3 && score2 > score1 ){
        cout << "Congratulations Player 2! You have won!" << endl;
    }else{
        cout << "Congratulations Player 3! You have won!" << endl;
    }
    //these last three are just checking for which is the highest, could have used a for loop.
}


int main(){
    findWinner("SKH3CADJCTD7S4CQHACA", "DJCTDACKH7S3CASQH4CA6" , "HASACADQH4C3CTDJC7SK", "C4C3");
}
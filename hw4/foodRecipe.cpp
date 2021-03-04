// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 2

#include <iostream>
#include <string>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}

int main(){
    int opt;
    bool ex = true;
    int first[20] = {440, 440, 440};
    int second[20] = {400, 400, 400};
    int third[20] = {3,3,3};
    int fourth[20] = {15, 120, 220};
    string rec[20] = {"Vanilla cake", "Chocolate cake", "Pound cake"};
    string fourthstr[20] = {"vanilla extract" , "cocoa powder", "cream cheese"};
    string firststr[20] ={"flour","flour","flour"};
    string secondstr[20] = {"sugar", "sugar", "sugar"};
    string thirdstr[20] = {"eggs","eggs","eggs"};
    bool units1[20] = {true, true, true};
    bool units2[20] = {true, true, true};
    bool units3[20] = {false, false, false};
    bool units4[20] = {true, true, true};
    string unitnames1[20] = {"grams", "grams", "grams"};
    string unitnames2[20] = {"grams", "grams", "grams"};
    string unitnames3[20] = {"grams", "grams", "grams"};
    string unitnames4[20] = {"grams", "grams", "grams"};
    // THe first set of ints are the amounts for each iteam
    // The first set of strings are the names of the ingredients
    // The bools are a set of determining the syntax of the output, whether it has units or not
    // The last set of strings are for the units, its done this way so that the user can define the units being used
    while(ex){
        cout << "Select a numerical option: " << endl;
        cout << "=== menu ===" << endl;
        int count;
        int lim;
        for (int i = 0; i < len(rec); i++){
            if(first[i] == 0){
                lim = i + 1;
                i = len(rec);
            }
        }
        // since i have a matrix of size 20 to let the user add some recipes, i will add in f stream to give the changes some perminacy to the changes
        for(count = 1; count < lim; count++){
            cout << count << ". " << rec[(count-1)] << endl;
        }
        cout << count << ". Quit" << endl;
        cout << (count + 1) << ". Edit recipies" << endl;
        // lists all the options by looking through the list and adding the options
        cin >> opt;
        int am1, am2, am3, am4;
        if(opt == (count)){
            // count works for the exit becuase that is how is printed
            cout << "GoodBye !" << endl;
            ex = false;
        }else if(opt > 0 && opt < count){
            // here we define the limits to this branch by the count function to make sure all possible entries are actually contained
            int x = opt - 1;
            // x is just the adjusted version of the user input to refernce the correct index from the respective matrix
            if(units1[x]){
                cout << "How many " << unitnames1[x] << " of " << firststr[x] << " do you have?" << endl;
                cin >> am1;
            }else{
                cout << "How many " << firststr[x] << " do you have?" << endl;
                cin >> am1;
            }
            // these if else statments are here to make sure that the formating makes sense, so for example if the user adds a bunch of iteams that don't need units like eggs it will still make sense when reading 
            if(units1[x]){
                cout << "How many " << unitnames2[x] << " of " << secondstr[x] << " do you have?" << endl;
                cin >> am2;
            }else{
                cout << "How many " << secondstr[x] << " do you have?" << endl;
                cin >> am2;
            }
            if(units1[x]){
                cout << "How many " << unitnames3[x] << " of " << thirdstr[x] << " do you have?" << endl;
                cin >> am3;
            }else{
                cout << "How many " << thirdstr[x] << " do you have?" << endl;
                cin >> am3;
            }
            if(units1[x]){
                cout << "How many " << unitnames4[x] << " of " << fourthstr[x] << " do you have?" << endl;
                cin >> am4;
            }else{
                cout << "How many " << fourthstr[x] << " do you have?" << endl;
                cin >> am4;
            }
            // the below if statment check the inputs for the recipie
            if(am1 >= first[x] && am2 >= second[x] && am3 >= third[x] && am4 >= fourth[x]){
                cout << "You can make a " << rec[x] << endl;
            }else{
                cout << "You dont have enough for a " << rec[x] << endl;
            }
        }else{
            cout << "Invalid input" << endl;
            // obviously if the input number does not apear on the list
        }
    }

}
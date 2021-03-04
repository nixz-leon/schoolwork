// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 5

#include <iostream>
#include <string>
using namespace std;

int main(){
    string aplhabet = "zyxwvutsrqponmlkjihgfedcba";
    int input;
    cout << "Enter the height: " << endl;
    cin >> input;
    // declaring all the necessary variables and assinging them
    int x = 0;
    for(int i = input; i >= 0; i--){
        // the loop that decreases it
        for(int j = 0; j < i; j++){
            // the loop that prints it out
            int refactor = x/ 26;
            // because of int devision we can get an idea of how many times its repeating and then add the delta to loop on string
            cout << aplhabet[x- (refactor*26)];
            x ++;
        }
        cout << endl;
    }
    return 0;
}
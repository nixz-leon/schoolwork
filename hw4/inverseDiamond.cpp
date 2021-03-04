// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 6


#include <iostream>
using namespace std;

int main(){
    int size; 
    cout << "Enter the length:" << endl;
    cin >> size;
    int width = (size*2) + 1;
    int length = (size*2) -1;
    // length and width are going to be the constantr reference variables that the remaining for loops are going to be using
    for(int i = 0; i < length; i++){
        // we have three for loops here, one to print the first set of the * and the the second to print the spaces, witht the thrid being for * again
        // the first two just operate on size because we have the variable left over so might as well use it instead of creating an experission
        // for the second we know by looking at the out put that spaces plus boths sets of starts must always be equal so, we can create an experission to mirror this
        for(int j = 0; j < size; j++){
            cout << "*";
        }
        for (int k = 0; k < (width-(size*2)); k++){
            cout << " " ;
        }
        for(int l = 0; l < size; l++){
            cout << "*" ; 
        }
        // these if states are the secondary iterator of the main for loop, where there is a conditionality and dependence on where we are to the intiall for loop
        // for the first half we are decreasing it, and past the half way pointt we start to increase it again
        if (i < ((length)/2)){
            size --;
        }else{
            size ++;
        }
        // we add the cout << endl; here because otherwise during each iteration of the loop it would just add to the existing line which would be kinda stupid
        cout << endl;
    }
    return 0;
}

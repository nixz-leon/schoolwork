// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 1

#include <iostream>
using namespace std;

int main(){
    int num;
    // intializing our variables
    cout << "Enter a positive number: " << endl;
    cin >> num;
    //inputing and assigning the target number
    if(num >= 0){
        int tot = 0;
        // this for loop starts on 1 an odd number and increases by two to skip over ht e even, another way to do it is to start at 0 and the use % and using the remainder in tandem with an if else statment
        for(int i = 0; i <= num; i++){
            // if we just initalize tot and then reference itself it will initally store junk which is negative(usually), so this is just to avoid any confusion
            if((i%2)==1){
                if(tot < 0){
                    tot = 0;
                }
                tot = tot+i;
            }
        }
        cout << "Sum: " << tot << endl;
    }else{
        cout << "Invalid input." << endl;
    }
    return 0;
}
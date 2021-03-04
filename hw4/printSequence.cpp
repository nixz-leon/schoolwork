// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 2

#include <iostream>
using namespace std;

int main(){
    int num;
    // Declaring the variable
    cout << "Enter a positive number: " << endl;
    cin >> num;
    // assigning num and then checking for if its positive
    if (num > 0){
        cout << num << endl;
        while(num > 1){
            // checking for divisiblity of 3, with the other option to be divided by 2 and then rounded down because its an int 
            if (num%3 == 0){
                num = num -1;
            }else{
                num = num/2;
            }
            // printing the resulting number
            cout << num << endl;
        }
    }else{
        cout << "Invalid input." << endl;
    }
    return 0;
}

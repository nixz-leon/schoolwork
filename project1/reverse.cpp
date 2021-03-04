// CS1300
// Author: Leon Roell
// Recitation: 207
// Project 1 problem 1

#include <iostream>
#include <string>
using namespace std;

void reverse(string number){
    int length = number.length()-1;
    //inverted for loop with a negative iterator 
    for(int i = length; i >= 0; i--){
        cout << number[i];
    }
    cout << endl;
}

int main(){
    reverse("04022021");
    return 0;

}
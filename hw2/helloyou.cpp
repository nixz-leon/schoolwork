#include <iostream>
#include <string>
using namespace std;
// declaring all the refences we are using, this time we need to include string


int main(){
    //first we declare a the variable
    string name;
    //then we ask for the prompt
    cout << "Enter your name: " <<  endl;
    //input the name and store it to the variab;e
    cin >> name;
    //printi it out again
    cout << "Hello, " << name << "!"<<  endl;
    
    return 0;
}
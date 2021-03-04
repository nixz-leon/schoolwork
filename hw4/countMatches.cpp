// CS1300
// Author: Leon Roell
// Recitation: 207
// Homework 4 problem 4

#include <iostream>
#include <string>
using namespace std;

int main(){
    string subject, target;
    cout << "Enter the search string: " << endl;
    cin >> subject;
    cout << "Enter the substring to be searched: " << endl;
    cin >> target;
    // declaring the vars and assigning value to them
    int subsize = target.size();
    // Getting the size of the substring
    int count = 0;
    for(int i = 0; i < (subject.size()-subsize+1); i++){
        // for loop above runs one so that the second for loop will not run out of index
        string temp;
        for(int j =0; j < subsize; j++){
            // this just add to the temp string
            temp += subject[i+j];
        }
        if(target == temp){
            // checks whether the subject string generated matches the substring typed in
            count += 1;
        }
    }
    cout << "Number of occurrences: " <<count << endl;
    return 0;
}
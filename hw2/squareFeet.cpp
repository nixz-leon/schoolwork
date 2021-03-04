#include <iostream>
#include <iomanip>
using namespace std;

double inchestofeet(double inches){
    double feet = inches/12.0;
    return feet;
}

int main(){
    double a, b;
    // all of these are declared as doubles to help with variablity of user input
    cout << "Enter the length of side a in inches: " << endl;
    cin >> a;
    cout << "Enter the length of side b in inches: " << endl;
    cin >> b;
    double total = inchestofeet(a) * inchestofeet(b);
    cout << fixed <<setprecision(2);
    cout << "The area of the rectangular field is " << total <<" square feet" << endl;
    return 0;
}
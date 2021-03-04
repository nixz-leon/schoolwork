#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi = M_PI;
    int x;
    cout << "Enter a value for x: " << endl;
    cin >> x;
    // the above is to declare and then assign x to the users number
    double first = 1/sqrt(2*pi);
    double epart = exp( -0.5 * (x*x));
    // the two parts of the formula are serpated just to make it easier to read
    double prob = first * epart;
    // this part just combines the two different parts of the equation
    cout <<"The probability at x=" << x << " is " << prob << endl;
    // this just outputs x and the probablity base on the normal probality density function
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

// this function is here in case the commission calculations changes in any way, this way the other aspects of the code don't need to be changed to much
double commission(double revenue, int x){
    double commission = revenue * 0.1;
    if(x == 2){
        commission = (50000*0.1) + ((revenue - 50000)*0.2);
    }
    return commission;
}

int main(){
    double revenue;
    cout << "Enter the value for revenue:"<< endl;
    cin >> revenue; 
    //declaring and then having the user assign a value to revenue
    // now for some if else statements
    if (revenue >= 0){
        cout << fixed <<setprecision(2);
        //just setting the percision to line up with cents 
        if(revenue > 50000){
            cout << "The commission that you earn is $" << commission(revenue, 2) << endl;
        }else{
            cout << "The commission that you earn is $" << commission(revenue, 1) << endl;
        }
    }else{
        cout << "Invalid input." << endl;
    }   
    return 0;
}
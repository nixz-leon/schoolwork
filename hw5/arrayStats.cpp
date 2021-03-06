#include <iostream>
#include <iomanip>
using namespace std;

void stats(double *arr, int len ){
    double highest = 0.0;
    double product = arr[0];
    double avg = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
        avg += arr[i]/len;
    }
    for(int i = 1; i < len; i++){
        product *= arr[i];
    }
    cout << fixed << setprecision(3);
    cout <<"Max: " << highest << endl;
    cout <<"Product: " << product << endl;
    cout <<"Avg: " << avg << endl;

}

int main(){
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void printit(int data[], int length)
{
    cout << '{';
    for(int i = 0; i < length; i++){
        if (i != (length-1)){
            cout << data[i] << ", ";
        }else{
            cout << data[i];
        }
    }
    cout << "}" << endl;
}
void printit2(string data[], int length)
{
    cout << '{';
    for(int i = 0; i < length; i++){
        if (i != (length-1)){
            cout << data[i] << ", ";
        }else{
            cout << data[i];
        }
    }
    cout << "}" << endl;
}
template<typename T, int size>
int len(T(&)[size]){return size;}

int main(){
    int c[90] = {6,1,4,5,8};
    int arr[90] = {4, 1, 8, 2, 9, 0, 5, 7, 6};
    string arr2[20] = {"",""};
    printit(arr, len(arr));
    printit2(arr2, len(arr2));
    bool test = (arr[1] == 4); 
    cout << (test) <<  endl;
    return 0;
}
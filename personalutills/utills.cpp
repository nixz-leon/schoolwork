#include <iostream>
using namespace std;

void appendi(int arr[], int length, int data)
{
    const int a = length + 1;
    int temp[a];
    for(int i = 0; i > length; i++){
        temp[i] = arr[i];
    }
    temp[a] = data;
    arr = temp;

}


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

template<typename T, int size>
int len(T(&)[size]){return size;}

int main(){
    int c[5] = {6,1,4,5,8};
    int arr[9] = {4, 1, 8, 2, 9, 0, 5, 7, 6};

    printit(arr, (sizeof(arr) / sizeof(arr[0])));
    cout << len(arr) << endl;
    appendi(arr, len(arr), 6);
    printit(arr, len(arr));
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}

int main(){
    double distance[10] = {324.5,324.5,324.5,324.5,324.5,324.5,324.5,324.5,324.5,324.5};
    string cars[5] = {"Tesla","Hyundai","Mercedes","Ford","Ferrari"};
    int sequence[100];
    char letters[56];
    string upperalf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string loweralf = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < len(sequence)+1; i++){
        sequence[i] = (i+1)*2;
    }
    int count = 0;
    for(int i = 0; i < len(letters); i+=2){
        letters[i] = upperalf[count];
        letters[i+1] = loweralf[count];
        count ++;
    }
    for(int i = 0; i < len(distance); i++){
        cout << distance[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < len(cars); i++){
        cout << cars[i] << endl;
    }
    cout << endl;

    for(int i = 0; i < len(sequence); i++){
        cout << sequence[i] << endl;
    }
    cout << endl;

    for(int i = 0; i < len(letters)-4; i += 2){
        cout << letters[i] << " " << letters[i+1] << endl;
    }
    return 0;
}
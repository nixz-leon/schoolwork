#include "split.h"
#include <string>
using namespace std;

int split(string text, char sep, string arr[], int size ){
    int counter = 0;
    string temp = "";
    int textlenght = text.length();
    if(textlenght == 0){
        //edge case
        return 0;
    }
    for(int i =0; i < textlenght; i++){
        if(text[i] == sep){
            // condition to let me still assign the last section
            if(counter < (size-1)){
                // resets temp based on whether it see identifier
                arr[counter] = temp;
                counter++;
                temp = "";
            }else{
                // if it goes outof bounds it still assigns the temp to the last slot
                arr[counter] = temp;
                return -1;
            }
        }else{
            // adds the characters to temp
            temp += text[i];
        }
    }
    //makes sure last section gets assigned
    arr[counter] = temp;
    return counter + 1;
}
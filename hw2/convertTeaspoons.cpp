#include <iostream>
using namespace std;

int main(){
    int teaspoon;
    cout << "Enter the number of teaspoons: " << endl;
    cin >> teaspoon;
    int tablespoon = teaspoon/3;
    teaspoon = teaspoon%3;
    // the way this works is first we create the new varible as a int, which will truncate the resulting double, and then we reasign the value of the remainder to the varible since the oringal value isn't being used any more
    int cups = tablespoon/16;
    tablespoon = tablespoon%16;
    cout << cups << " cup(s) " << tablespoon << " tablespoon(s) " << teaspoon << " teaspoon(s)" <<  endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

template<typename T, int size>
int len(T(&)[size]){return size;}
//this was something i did early to try and get marticies to act like lists in python this is a template which is expecting two different parameters, a type name and a size, so it returns the only thing that could be considered size


int estimate( int birthrate[], int deathrate[], string animal, int years, int ip[], int length){
    string animals[3] = {"Fox", "Bunny", "Sloth"};
    int index;
    for(int i = 0; i < length; i++){
        if(animal == animals[i]){
            index = i;
        }
    }
    // this code is just to find what animal is being referenced, this would allow for felxiblity in the future if for example you wanted to add in more animals it could handle it
    int newpop = ip[index] + ((birthrate[index]-deathrate[index]) * years);
    return newpop;
}
int main(){
    int birthrate[3] = {110, 90, 120};
    int deathrate[3] = {80, 100,50};
    int ip[3] = {11000, 23000, 19000};
    int years;
    cout << "Enter the number of years to estimate: " << endl;
    cin >> years;
    int a, b, c;
    a = estimate(birthrate, deathrate, "Fox", years, ip, len(birthrate));
    b = estimate(birthrate, deathrate, "Bunny", years, ip, len(birthrate));
    c = estimate(birthrate, deathrate, "Sloth", years, ip, len(birthrate));
    // this could also be altered by having an input where the user asks what animals they want to know, with a if statment to allow parts  to print, or to prevent things from printing
    cout << "There will be " << a << " foxes, " << b << " bunnies, and "<< c << " sloths in "<< years <<" years." <<endl;
    // is all of this over kill, 100%, so why do it, why not make it a little harder, it took like 10 minutes so i'd say not a waste of time
    return 0;
}
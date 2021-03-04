#include <iostream>
using namespace std;
int main()
{
   int age;
   cout << "Enter the age: " << endl;
   cin >> age;
   // here we are declaring and then getting a user input for the age of the user
   // now we are going to use a set of nested if else statments to determine if the age is both a valid age and whether it allows the person to go into the bar
   // Logic: First check if age is above 0, if true the only condition we need to check is if above or equal to 21 with all the other possible outputs covered by the else staments
   // Alternate is to first check for 21+ and then check for negative but that would need an else if statement.
   if(age > 0){
      if(age >= 21){
         cout << "You are allowed to go inside the bar" << endl;
      }else{
         cout << "You are not allowed to go inside the bar" << endl;
      }
   }else{
      cout << "Invalid age" << endl;
   }
   return 0;
}
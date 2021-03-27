#include"Product.h"
#include <iomanip>

// just goes through the arr and prints out the products name and price.
void printAllProducts(Product arr[], int numProducts){
    if(numProducts <= 0){
        cout << "No products are stored" << endl;
    }else{
        cout << "Here is a list of products" << endl;
        cout << fixed << setprecision(2);
        for(int i = 0; i < numProducts; i ++){
            cout << arr[i].getName() << " costs ";
            cout << arr[i].getPrice() << endl; 
        }
    }

}
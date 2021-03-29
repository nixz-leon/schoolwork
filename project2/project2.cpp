#include "Customer.h"
#include "Product.h"
#include "addCustomerDriver.cpp"
#include "countCategoryDriver.cpp"
#include "getCustomerStatsDriver.cpp"
#include "printAllProductsDriver.cpp"
#include "readProductsDriver.cpp"
#include "readPurchasesDriver.cpp"
#include "getPurchasedQuantityDriver.cpp"
#include "searchNameCategoryDriver.cpp"



int main(){
    bool exit_cond = false;
    Customer customers[100];
    Product products[50];
    // first creating the arrs
    int prods_stored = 0;
    int cust_stored = 0;
    while(!exit_cond){
        string option;
        cout << "Select a numerical option:" << endl;
        cout << "======Main Menu=====" << endl;
        cout << "1. Read products from file" << endl;
        cout << "2. Print all products" << endl;
        cout << "3. Product-count by category" << endl;
        cout << "4. Filter products by category, search word" << endl;
        cout << "5. Add customer" << endl;
        cout << "6. Read purchases" << endl;
        cout << "7. Get purchased quantity" << endl;
        cout << "8. Get customer statistics" << endl;
        cout << "9. Quit" << endl;
        cin >> option;
        if(option == "9"){
            cout << "Good bye!" << endl;
            exit_cond = true;
            // first checks for the user exiting
        }else if(option == "1"){
            string filename;
            cout << "Enter a product file name:" << endl;
            cin >> filename;
            int output = readProducts(filename, products,prods_stored, 50);
            if(output == -1){
                cout << "No products saved to database" << endl;
            }else if (output == -2){
                cout << "Database is already full. No products were added." << endl;

            }else if(output == 50){
                cout << "Database is full. Some products may have not been added." << endl;
                prods_stored = output;
            }else{
                cout << "Total products the in database: " << output <<endl;
                prods_stored = output;
            }
            cout << endl;
        }
        else if(option == "2"){
            printAllProducts(products, prods_stored);
            cout << endl;
        }else if(option == "3"){
            string cat;
            cout << "Enter the category: " << endl;
            cin.ignore();
            getline(cin, cat);
            int output = countCategory(cat, products, prods_stored);
            cout << "Total " << cat << " products in the database: " << output << endl;
        }else if(option == "4"){
            string cat, key;
            cout << "Enter the category:" << endl;
            cin.ignore();
            getline(cin, cat);
            cout << "Enter the search word:" << endl;
            cin.ignore();
            getline(cin, key);
            int output = searchNameCategory( cat, key, products, prods_stored);
            cout << "Number of Products found for this filter:" << endl;
            cout << output << endl; 
        }else if(option == "5"){
            string name;
            cout << "Enter a customer name:" << endl;
            cin >> name;
            int output = addCustomer(name, customers, prods_stored, cust_stored, 100);
            if(output == -2){
                cout << "Database is already full. Customer cannot be added." << endl;
            }else if(output == -1){
                cout << "Customer already exists or the customerName is empty." << endl;
            }else{
                cout << "Welcome, " << name << endl;
            }
        }else if(option == "6"){
            string filename;
            cout << "Enter the purchases file name;" << endl;
            cin >> filename;
            int output = readPurchases(filename, customers, cust_stored, 100, 51);
            if(output == -1){
                cout << "Nothing saved to the database." << endl;
            }else if(output == -2){
                cout << "Data is already full. Nothing was added." << endl;
            }else if(output == 100){
                cout << "Database is full. Some customers may have not been added." << endl;
            }else{
                cust_stored = output;
                cout << "Total customers in the database: " << cust_stored << endl;
            }
        }else if(option == "7"){
            string name, prod;
            cout << "Enter a customer name:" << endl;
            cin >> name;
            cout << "Enter a product name:" << endl;
            cin.ignore();
            getline(cin, prod);
            int output = getPurchasedQuantity(name, prod, customers, products, cust_stored, prods_stored);
            if(output == -3){
                cout << name << " or " << prod << " does not exist." << endl;
            }else{
                cout << name << " has purchased " << output << " of " << prod << endl;
            }
        }else if(option == "8"){
            string name;
            cout << "Enter a customer name:" << endl;
            cin >> name;
            int output = getCustomerStats(name, customers, cust_stored, prods_stored);

        }else{
            cout << "Invalid input" << endl;
        }
    }
    // most of this is explained by the couts so it should be easy enough to follow
    return 0;
}
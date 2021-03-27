#include "readProductsDriver.cpp"
#include "printAllProductsDriver.cpp"

int searchNameCategory(string Cat, string Keyword, Product products[], int Num_Stored){
    Product matches[Num_Stored];
    int count = 0;
    for (int i = 0; i < Num_Stored; i ++){
        string temp_cat = products[i].getCategory();
        string temp_name = products[i].getName();
        if (temp_cat == Cat){
            int subsize = Keyword.size();
            // Getting the size of the substring
            for(int k = 0; k <= (temp_name.size()-subsize); k++){
                // for loop above runs one so that the second for loop will not run out of index
                string temp;
                for(int j =0; j < subsize; j++){
                    // this just add to the temp string
                    temp += temp_name[k+j];
                }
                if(Keyword == temp){
                    // checks whether the temp_name string generated matches the substring typed in
                    matches[count] = products[i];
                    count += 1;
                    // we only care if there is a match in the name for the keyword so to avoid any edge cases we can just exit the current for loop and look at the next item in products
                    k = temp_name.size()-subsize+2;
                }
            }
        }
    }
    if(count >0){
        cout << "Here is a list of products that match this category-search word pair" << endl;
        for (int i = 0; i < count; i ++){
            cout << matches[i].getName() << endl;
        }
    }else{
        cout << "No matching products found." << endl;
    }
    return count;
}

int main(){
    Product products[50];
    readProducts("products.txt", products, 0, 50);
    cout << searchNameCategory("Beauty & Makeup", "Hat" ,products, 50)<< endl;;

}
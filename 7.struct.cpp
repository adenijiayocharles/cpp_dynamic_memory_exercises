#include <iostream>

using namespace std;

struct Product
{
    string name;
    string manufacturer;
    float price;
    float discount;
};

void getProductStructDetails(Product *product)
{
    cout << "Enter the product name: ";
    cin >> product->name;

    cout << "Enter the product price: ";
    cin >> product->price;

    cout << "Enter the product manufacturer: ";
    cin >> product->manufacturer;

    cout << "Enter the product discount: ";
    cin >> product->discount;
}

void displayProductStruct(Product *product)
{
    cout << "Product name " << product->name << endl;
    cout << "Product price £" << product->price << endl;
    cout << "Product manufacturer name " << product->manufacturer << endl;
    cout << "Product discount £" << product->discount << endl;
}

int main()
{
    Product *structPointer = new Product;
    getProductStructDetails(structPointer);
    displayProductStruct(structPointer);

    delete structPointer;
    return 0;
}

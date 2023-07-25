#include <iostream>

using namespace std;

struct Product
{
    string name;
    string manufacturer;
    float price;
    float discount;
};

int main()
{
    int size;

    cout << "What is the size of the structs you need? ";
    cin >> size;

    Product *ptrProduct = new Product[size];

    if (ptrProduct != NULL)
    {
        // populate struct member from user prompts
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the product name: ";
            cin >> ptrProduct[i].name;

            cout << "Enter the product price: ";
            cin >> ptrProduct[i].price;

            cout << "Enter the product manufacturer: ";
            cin >> ptrProduct[i].manufacturer;

            cout << "Enter the product discount: ";
            cin >> ptrProduct[i].discount;

            cout << endl;
        }

        for (int i = 0; i < size; i++)
        {
            cout << "Product name " << ptrProduct[i].name << endl;
            cout << "Product price £" << ptrProduct[i].price << endl;
            cout << "Product manufacturer name " << ptrProduct[i].manufacturer << endl;
            cout << "Product discount £" << ptrProduct[i].discount << endl;
            cout << "============" << endl;
        }

        delete[] ptrProduct;
    }

    return 0;
}

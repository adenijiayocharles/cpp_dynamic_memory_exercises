// Write a C++ program to dynamically create an array of objects using the new operator.
#include <iostream>

using namespace std;

class Product
{
private:
    double price;
    string name;

public:
    void setName(string productName)
    {
        name = productName;
    }

    string getName()
    {
        return name;
    }

    void setPrice(double amount)
    {
        price = amount;
    }

    double getPrice()
    {
        return price;
    }
};

int main()
{
    // intialise array size
    int productSize;

    cout << "How many products do you need? ";
    cin >> productSize;
    cout << endl;

    // instantiate the object with a maximum size = arraySize;
    Product product[productSize];

    for (int i = 0; i < productSize; i++)
    {
        // initialise vars to hold the product name and price entered by user
        string productName;
        double productPrice;

        // set the product name in the current object
        cout << "enter the product " << i + 1 << " name: ";
        cin >> productName;
        product[i].setName(productName);

        cout << "enter the product " << i + 1 << " price: ";
        cin >> productPrice;
        product[i].setPrice(productPrice);

        cout << endl;
    }

    cout << "Displaying the content of the object of class Product " << endl;
    cout << "=====================================================" << endl;

    for (int i = 0; i < productSize; i++)
    {
        cout << "Product " << i + 1 << " details: " << endl;
        cout << "\t Name: " << product[i].getName() << endl;
        cout << "\t Price: £" << product[i].getPrice() << endl;
        cout << endl;
    }

    return 0;
}
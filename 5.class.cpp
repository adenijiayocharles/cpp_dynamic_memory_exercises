#include <iostream>

using namespace std;

class MyName
{
public:
    string displayWelcomeMessage(string name)
    {
        return "Welcome " + name;
    }
};

int main()
{
    // intialise an object pointer to an instance of the MyName class
    MyName *objectPointer = new MyName;

    // request for user input on the console
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // print the value of the displayWelcomeMessage
    cout << objectPointer->displayWelcomeMessage(name);

    // deallocate the memory
    delete objectPointer;

    return 0;
}
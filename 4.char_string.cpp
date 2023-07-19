// Create a C++ program that allocates memory for a character and a string dynamically. Enter a user-supplied character and string.
#include <iostream>

using namespace std;

int main()
{
    // intialise variables to hold the inputted values
    char character;
    string characters;

    // ask for a word in the console
    cout << "Enter a word below: ";
    cin >> characters;

    // ask for a character in the console
    cout << "Enter a single character below: ";
    cin >> character;

    // allocate memory for the variables above in the heap memory
    char *charPtr = new char(character);
    string *stringPtr = new string(characters);

    // print the variables from the heap memory
    cout << "String value = " << *stringPtr << endl;
    cout << "Char value = " << *charPtr << endl;

    delete charPtr;
    delete stringPtr;

    return 0;
}
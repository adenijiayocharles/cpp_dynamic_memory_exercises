// Create a C++ program that dynamically allocates and assigns values to an integer, a character, and a string.

#include <iostream>

using namespace std;

int main()
{
    // initialise the variables
    int number;
    char character;
    string characters;

    // asks the user to enter an integer and assign it to variable number
    cout << "Enter a number from 0 - 9: ";
    cin >> number;

    // asks the user to enter an character and assign it to variable character
    cout << "Enter a single chaacter from A to Z: ";
    cin >> character;

    // asks the user to enter a string and assign it to variable characters
    cout << "Enter a word: ";
    cin >> characters;

    // dynamically ask for more memory by passing the variables above to new
    int *integerPtr = new int(number);
    string *charactersPtr = new string(characters);
    char *charPtr = new char(character);

    // print the values in the pointer
    cout << "Integer Pointer Value = " << *integerPtr << endl;
    cout << "Characters Pointer Value = " << *charactersPtr << endl;
    cout << "Character Pointer Value = " << *charPtr << endl;

    // delete the allocared memory
    delete integerPtr;
    delete charactersPtr;
    delete charPtr;

    return 0;
}
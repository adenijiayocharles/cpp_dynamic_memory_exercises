// Create a C++ program that dynamically allocates and initialises an array of integers and strings.

#include <iostream>

using namespace std;

int main()
{
    // initialise the size of the array
    int arraySize = 5;

    // dynamically allocate memory using the new keyword
    int *numbersPtr = new int[arraySize];

    // populate the numbersPTR array
    for (int i = 0; i < arraySize; i++)
    {
        numbersPtr[i] = i + 2;
    }

    // print the numbersInt;
    for (int j = 0; j < arraySize; j++)
    {
        cout << "Value at index " << j << " is " << numbersPtr[j] << endl;
    }

    // release and delete the allocated memory
    delete[] numbersPtr;
    cout << "=======================" << endl;
    string *stringsPtr = new string[arraySize];

    for (int k = 0; k < arraySize; k++)
    {
        string word;
        cout << "Enter a random word ";
        cin >> word;
        stringsPtr[k] = word;
    }
    cout << "=======================" << endl;
    // print the numbersInt;
    for (int j = 0; j < arraySize; j++)
    {
        cout << "Value at index " << j << " is " << stringsPtr[j] << endl;
    }
    // release and delete the allocated string memory
    delete[] stringsPtr;

    return 0;
}
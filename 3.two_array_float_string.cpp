// Create a C++ program that allocates two-dimensional arrays of floating values and strings dynamically. Set up its elements.

#include <iostream>

using namespace std;

int main()
{
    // initialise the size of the array represented by rows and columns
    int rows = 2;
    int columns = 2;

    // intialise the rows on the heap
    float **floatArray = new float *[rows];

    // create an array
    for (int i = 0; i < rows; i++)
    {
        floatArray[i] = new float[columns];
    }

    // po
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            float value;
            cout << "Enter a decimal value below: ";
            cin >> value;
            floatArray[i][j] = value;
        }
    }

    // loop through the two dimensional array and display its values
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << floatArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    delete[] floatArray;

    cout << "==================================" << endl;

    // intialise the rows on the heap
    string **stringArray = new string *[rows];
    // create an array
    for (int i = 0; i < rows; i++)
    {
        stringArray[i] = new string[columns];
    }

    // po
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            string value;
            cout << "Enter a string below: ";
            cin >> value;
            stringArray[i][j] = value;
        }
    }

    // loop through the two dimensional array and display its values
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << stringArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    delete[] stringArray;

    return 0;
}
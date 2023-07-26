#include <iostream>

using namespace std;

class Stack
{
    int totalSize;
    int currentSize;

    int *array;

public:
    Stack(int size)
    {
        totalSize = size;
        currentSize = 0;
        array = new int[totalSize];
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (currentSize == totalSize)
        {
            cout << "STACK IS FULL" << endl;
        }
        else
        {
            array[currentSize] = value;
            currentSize++;
            cout << "Pushing " << value << " into the stack " << endl;
        }
    }

    int pop()
    {
        if (currentSize == 0)
        {
            cout << "STACK IS EMPTY" << endl;
            return -1;
        }
        else
        {
            currentSize--;
            cout << "Popping " << array[currentSize] << " from the stack " << endl;
            return array[currentSize];
        }
    }

    void displayStack()
    {
        for (int i = 0; i < currentSize; i++)
        {
            cout << array[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Stack *newStack = new Stack(4);
    newStack->push(2);
    newStack->push(6);
    newStack->push(7);
    newStack->push(9);
    newStack->displayStack();
    newStack->pop();
    newStack->displayStack();
    return 0;
}
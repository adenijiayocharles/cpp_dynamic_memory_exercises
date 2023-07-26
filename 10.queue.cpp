#include <iostream>

using namespace std;

class Queue
{
    int totalSize;
    int front, rear;
    int *array;

public:
    Queue(int size)
    {
        totalSize = size;
        front = -1;
        rear = -1;
        array = new int[totalSize];
    }

    ~Queue()
    {
        delete[] array;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue full" << endl;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear++) % totalSize;
        }
        array[rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front++) % totalSize;
        }
    }

    bool isFull()
    {
        if ((rear + 1) % totalSize == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << array[front];
        }
    }
};

int main()
{
    Queue *queuePtr = new Queue(5);
    if (queuePtr != NULL)
    {
        queuePtr->enqueue(2);
        queuePtr->enqueue(3);
        queuePtr->enqueue(1);
        queuePtr->enqueue(5);
        queuePtr->enqueue(6);
        queuePtr->enqueue(688);
        queuePtr->dequeue();
    }
}
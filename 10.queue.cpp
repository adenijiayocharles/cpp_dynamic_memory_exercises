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
            rear = (rear + 1) % totalSize;
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
            front = (front + +1) % totalSize;
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
    Queue queue(5);
    queue.enqueue(1);
    queue.enqueue(6);
    queue.enqueue(3);
    queue.enqueue(6);
    queue.enqueue(5);
    queue.dequeue();
    queue.enqueue(7);
}
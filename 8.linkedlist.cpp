// Write a C++ program to dynamically allocate memory for a linked list and perform basic operations like insert and delete node(s).
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBeginning(Node *&head, Node *&last, int number)
{
    Node *temp = new Node;
    temp->data = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}
void insert(Node *&head, Node *&last, int number)
{
    if (head == NULL)
    {
        insertAtBeginning(head, last, number);
    }
    else
    {
        Node *temp = new Node;
        temp->data = number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void remove(Node *&head, Node *&last)
{
    if (head == NULL)
    {
        cout << "The list is empty" << endl;
    }
    else if (head == last)
    {
        delete head;
        head = NULL;
        last = NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
void show(Node *current)
{
    if (current == NULL)
    {
        cout << "The list is empty" << endl;
    }
    else
    {
        cout << "Printing out the list " << endl;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *last = NULL;

    insert(head, last, 1);
    insert(head, last, 6);
    show(head);
    insert(head, last, 4);
    insert(head, last, 49);
    remove(head, last);
    show(head);
}
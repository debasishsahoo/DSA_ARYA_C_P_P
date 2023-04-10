#include <iostream>
#include <cstdlib> // for rand() function
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

int countNodes()
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        int count = 1;
        Node *temp = head->next;
        while (temp != head)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

void createList(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        head->next = head;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
void insertBegin(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    head = newNode;
}
void insertEnd(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertPosition(int data, int position)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1)
    {
        insertBegin(data);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deleteBegin()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        delete head;
        head = temp->next;
    }
}
void deleteEnd()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else if (head->next == head)
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node *temp1 = head;
        Node *temp2 = head->next;
        while (temp2->next != head)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp1->next = head;
        delete temp2;
    }
}
void deletePosition(int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp1 = head;
        if (position == 1)
        {
            deleteBegin();
        }
        else
        {
            for (int i = 1; i < position - 1; i++)
            {
                temp1 = temp1->next;
            }
            Node *temp2 = temp1->next;
            temp1->next = temp2->next;
            delete temp2;
        }
    }
}
void randomInsert(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        head->next = head;
    }
    else
    {
        int position = rand() % countNodes() + 1; // generate a random position between 1 and the number of nodes in the list
        insertPosition(data, position);
    }
}

void randomDelete()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        int position = rand() % countNodes() + 1; // generate a random position between 1 and the number of nodes in the list
        deletePosition(position);
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
}

int main()
{
    insertBegin(10);
    insertEnd(20);
    insertPosition(15, 2);
    display(); // expected output: 10 15 20

    deletePosition(2);
    display(); // expected output: 10 20

    randomInsert(30);
    display(); // expected output: 10 20 30

    randomDelete();
    display(); // expected output: 10 30

    return 0;
}
#include <iostream>
using namespace std;
#define SIZE 10

class CircularQueue                                      
{
    int a[SIZE];
    int rear;  // same as tail
    int front; // same as head

public:
    CircularQueue()
    {
        rear = front = -1;
    }

    // function to check if queue is full
    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        if (front == rear + 1)
        {
            return true;
        }
        return false;
    }

    // function to check if queue is empty
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // declaring enqueue, dequeue, display and size functions
    void enqueue(int x);
    int dequeue();
    void display();
    int size();
};

// function enqueue - to add data to queue
void CircularQueue ::enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue is full";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % SIZE; // going round and round concept
        // inserting the element
        a[rear] = x;
        cout << endl
             << "Inserted " << x << endl;
    }
}

// function dequeue - to remove data from queue
int CircularQueue ::dequeue()
{
    int y;
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        y = a[front];
        if (front == rear)
        {
            // only one element in queue, reset queue after removal
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        return (y);
    }
}

void CircularQueue ::display()
{
    /* Function to display status of Circular Queue */
    int i;
    if (isEmpty())
    {
        cout << endl
             << "Empty Queue" << endl;
    }
    else
    {
        cout << endl
             << "Front -> " << front;
        cout << endl
             << "Elements -> ";
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            cout << a[i] << "\t";
        }
        cout << a[i];
        cout << endl
             << "Rear -> " << rear;
    }
}

int CircularQueue ::size() 
{
    if (rear >= front)
    {
        return (rear - front) + 1;
    }
    else
    {
        return (SIZE - (front - rear) + 1);
    }
}

// the main function
int main()
{
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(100);
    cq.enqueue(1000);

    cout << endl
         << "Size of queue: " << cq.size();

    cout << endl
         << "Removed element: " << cq.dequeue();

    cq.display();

    return 0;
}
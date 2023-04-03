#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

// Implement a queue using a single stack
class Queue
{
    stack<int> s;

public:
    // Add an item to the queue
    void enqueue(int data)
    {
        // push item into the first stack
        s.push(data);
    }

    // Remove an item from the queue
    int dequeue()
    {
        // if the stack is empty
        if (s.empty())
        {
            cout << "Underflow!!";
            exit(0);
        }

        // pop an item from the stack
        int top = s.top();
        s.pop();

        // if the stack becomes empty, return the popped item
        if (s.empty())
        {
            return top;
        }

        // recur
        int item = dequeue();

        // push popped item back into the stack
        s.push(top);

        // return the result of dequeue() call
        return item;
    }
};

int main()
{
    int keys[] = {1, 2, 3, 4, 5};
    Queue q;

    // insert the above keys into the queue
    for (int key : keys)
    {
        q.enqueue(key);
    }

    cout << q.dequeue() << endl; // print 1
    cout << q.dequeue() << endl; // print 2

    return 0;
}
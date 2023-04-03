#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;

// Implement a queue using two stacks
class Queue
{
    stack<int> s1, s2;

public:
    // Add an item to the queue
    void enqueue(int data)
    {
        // push item into the first stack
        s1.push(data);
    }

    // Remove an item from the queue
    int dequeue()
    {
        // if both stacks are empty
        if (s1.empty() && s2.empty())
        {
            cout << "Underflow!!";
            exit(0);
        }

        // if the second stack is empty, move elements from the first stack to it
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            // or make a call to `swap(s1, s2)`
        }

        // return the top item from the second stack
        int top = s2.top();
        s2.pop();
        return top;
    }
};

int main()
{
    int keys[] = {1, 2, 3, 4, 5};
    Queue q;

    // insert above keys
    for (int key : keys)
    {
        q.enqueue(key);
    }

    cout << q.dequeue() << endl; // print 1
    cout << q.dequeue() << endl; // print 2

    return 0;
}
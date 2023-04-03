#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
using namespace std;

// Implement stack using a single queue and recursion
class Stack
{
    queue<int> q;

public:
    // Insert an item into the stack
    void push(int x)
    {
        q.push(x);
    }

    // Utility function to reverse contents of a queue
    void reverseQueue()
    {
        // base case
        if (q.empty())
        {
            return;
        }

        // hold the front element in the call stack and enqueue
        // it again after the recursive call is over

        int front = q.front();
        q.pop();

        reverseQueue();

        q.push(front);
    }

    // Remove the top item from the stack
    int pop()
    {
        // if the queue is empty
        if (q.empty())
        {
            cout << "Underflow!!" << endl;
            exit(0);
        }

        // reverse the queue
        reverseQueue();

        // dequeue front element from the reversed queue
        int front = q.front();
        q.pop();

        // revert the queue to the original state
        reverseQueue();

        return front;
    }
};

int main()
{
    vector<int> keys = {1, 2, 3, 4, 5};

    // insert the above keys into the stack
    Stack s;
    for (int key : keys)
    {
        s.push(key);
    }

    for (int i = 0; i <= keys.size(); i++)
    {
        cout << s.pop() << endl;
    }

    return 0;
}
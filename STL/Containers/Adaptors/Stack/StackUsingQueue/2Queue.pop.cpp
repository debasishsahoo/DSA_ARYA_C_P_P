#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

// Implement stack using two queues
class Stack
{
    queue<int> q1, q2;

public:
    // Insert an item into the stack
    void push(int data)
    {
        // Push the given item into the first queue
        q1.push(data);
    }

    // Remove the top item from the stack
    int pop()
    {
        // if the first queue is empty
        if (q1.empty())
        {
            cout << "Stack Underflow!!";
            exit(0);
        }

        // Move all elements except last from the first queue to the second queue
        int front;
        while (!q1.empty())
        {
            if (q1.size() == 1)
            {
                front = q1.front();
            }
            else
            {
                q2.push(q1.front());
            }

            q1.pop();
        }

        // Return the last element after moving all elements back
        // to the first queue
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }

        /* The above loop can be replaced with a call to `swap(q1, q2)` */

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
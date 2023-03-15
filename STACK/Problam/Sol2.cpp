// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// A class to create
// our special stack
class Stack
{
private:
    // Initial size of
    // the Array
    int Max = 5;

    // Array for the stack
    // implementation
    int *arr = new int(Max);

    // Stores the minimum
    // Element of the stack
    int minEle = 0;

    // Stores the top element
    // of the stack
    int top = 0;

public:
    // Method to check whether
    // stack is empty or not
    bool empty()
    {
        if (top <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Method to push elements
    // to the Special Stack
    void push(int x)
    {
        // If stack is empty
        if (empty())
        {

            // Assign x to minEle
            minEle = x;

            // Assign x to arr[top]
            arr[top] = x;

            // Increment top by 1
            top++;
        }
        // If array is full
        else if (top == Max)
        {

            // Update the Max size
            Max = 2 * Max;

            int *temp = new int(Max);

            // Traverse the array arr[]
            for (int i = 0; i < top; i++)
            {
                temp[i] = arr[i];
            }

            // If x is less than minEle
            if (x < minEle)
            {

                // Push 2*x-minEle
                temp[top] = 2 * x - minEle;

                // Assign x to minEle
                minEle = x;

                top++;
            }
            // Else
            else
            {

                // Push x to stack
                temp[top] = x;
                top++;
            }
            // Assign address of the
            // temp to arr
            arr = temp;
        }
        else
        {
            // If x is less
            // than minEle
            if (x < minEle)
            {

                // Push 2*x-minEle
                arr[top] = 2 * x - minEle;
                top++;

                // Update minEle
                minEle = x;
            }
            else
            {
                // Push x to the
                // stack
                arr[top] = x;
                top++;
            }
        }
    }
    // Method to pop the elements
    // from the stack.
    void pop()
    {
        // If stack is empty
        if (empty())
        {
            cout << "Underflow" << endl;
            return;
        }
        // Stores the top element
        // of the stack
        int t = arr[top - 1];

        // If t is less than
        // the minEle
        if (t < minEle)
        {
            // Pop the minEle
            cout << "Popped element : " << minEle << endl;

            // Update minEle
            minEle = 2 * minEle - t;
        }
        // Else
        else
        {
            // Pop the topmost element
            cout << "Popped element : " << t << endl;
        }
        top--;
        return;
    }

    // Method to find the topmost
    // element of the stack
    int peek()
    {
        // If stack is empty
        if (empty())
        {
            cout << "Underflow" << endl;
            return -1;
        }

        // Stores the top element
        // of the stack
        int t = arr[top - 1];

        // If t is less than
        // the minEle
        if (t < minEle)
        {
            return minEle;
        }
        // Else
        else
        {
            return t;
        }
    }
    // Method to find the Minimum
    // element of the Special stack
    int getMin()
    {
        // If stack is empty
        if (empty())
        {
            cout << "Underflow" << endl;
            return -1;
        }
        // Else
        else
        {
            return minEle;
        }
    }
};
// Driver Code
int main()
{
    Stack S;

    S.push(10);
    S.push(4);
    S.push(9);
    S.push(6);
    S.push(5);

    cout << "Top Element : " << S.peek() << endl;

    cout << "Minimum Element : " << S.getMin() << endl;

    S.pop();
    S.pop();
    S.pop();
    S.pop();

    cout << "Top Element : " << S.peek() << endl;
    cout << "Minimum Element : " << S.getMin() << endl;

    return 0;
}

/*
Given a stack S, the task is to copy the content of the given stack S to another stack T maintaining the same order.
*/
#include <bits/stdc++.h>
using namespace std;

// Auxiliary function to copy elements
// of S stack to T stack
void RecursiveCloneStack(stack<int> &S, stack<int> &T)
{
    // Base case for Recursion
    if (S.size() == 0)
        return;

    // Stores the top element of the
    // S stack
    int val = S.top();

    // Removes the top element of the
    // S stack
    S.pop();

    // Recursive call to the function
    // with remaining stack
    RecursiveCloneStack(S, T);

    // Push the top element of the S
    // stack into the T stack
    T.push(val);
}

// Function to copy the elements of the
// S stack to T stack
void cloneStack(stack<int> &S)
{
    // Stores the T stack
    stack<int> T;

    // Recursive function call to copy
    // the S stack to the
    // T stack
    RecursiveCloneStack(S, T);

    cout << "T:- ";
    int f = 0;

    // Iterate until stack T is
    // non-empty
    while (!T.empty())
    {

        if (f == 0)
        {
            cout << T.top();
            f = 1;
        }

        else
            cout << "			 "
                 << T.top();
        T.pop();

        cout << '\n';
    }
}

// Driver Code
int main()
{
    stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    cloneStack(S);

    return 0;
}

// Time Complexity: O(N)
// Auxiliary Space: O(1)

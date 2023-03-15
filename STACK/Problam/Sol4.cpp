/*
Given a stack S, the task is to reverse the stack S using two additional stacks.
Input: S={1, 2, 3, 4, 5}
Output: 5 4 3 2 1
Explanation:
The initial stack S:
1→top
2
3
4
5
After reversing it, use two additional stacks:
5→top
4
3
2
1

Input: S={1, 25, 17}
Output: 17 25 1

Approach: Follow the steps below to solve the problem:

Create two additional empty stacks, say A and B.
Define a function transfer() that accepts two stacks X and Y as parameters and performs the following operations:
Loop while X is not empty and perform the following operations:
Push the top element of the stack X into Y.
Pop that element from X.
Call transfer(S, A) tos transfers all elements of the stack S to A. (The order of the elements is reversed).
Call transfer(A, B) to transfer all elements of the stack A to B. (The order of the elements is the same as initially in S)
Call transfer(B, S) to transfer all elements of B to S. (The order of the elements is reversed)
Finally, display the stack S.
*/

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to transfer elements
// from the stack X to the stack Y
void transfer(stack<int> &X,stack<int> &Y)
{
    // Iterate while X is not empty
    while (!X.empty())
    {

        // Push the top element
        // of X into Y
        Y.push(X.top());

        // Pop from X
        X.pop();
    }
}

// Function to display the
// contents of the stack S
void display(stack<int> S)
{
    // Iterate while S is
    // not empty
    while (!S.empty())
    {

        // Print the top
        // element of the stack S
        cout << S.top() << " ";

        // Pop from S
        S.pop();
    }
    cout << endl;
}

// Function to reverse a stack using two stacks
void reverseStackUsingTwoStacks(stack<int> &S)
{
    // Two additional stacks
    stack<int> A, B;

    // Transfer all elements
    // from the stack S to A
    transfer(S, A);

    // Transfer all elements
    // from the stack A to B
    transfer(A, B);

    // Transfer all elements
    // from the stack B to S
    transfer(B, S);

    // Print the contents of S
    display(S);
}
// Driver Code
int main()
{
    // Input
    stack<int> S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);

    // Function call
    reverseStackUsingTwoStacks(S);

    return 0;
}

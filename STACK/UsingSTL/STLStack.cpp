#include <iostream>
#include <stack>
using namespace std;

// function prototype for display_stack utility
void display_stack(stack<string> st);

int main()
{

    // create a stack of strings
    stack<string> colors;

    cout << "Initial Stack: ";
    // print elements of stack
    display_stack(colors);

    // check if the stack is empty
    if (colors.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    // push elements into the stack
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");

    if (colors.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    // get top element
    string top = colors.top();
    cout << "Top Element: " << top << endl;

    // get the size of the stack
    int size = colors.size();
    cout << "Size of the stack: " << size << endl;

    // removes "Blue" as it was inserted last
    colors.pop();

    /// print elements of stack
    display_stack(colors);

    return 0;
}

// utility function to display stack elements
void display_stack(stack<string> st)
{

    while (!st.empty())
    {
        cout << st.top() << ", ";
        st.pop();
    }

    cout << endl;
}
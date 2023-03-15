// custom class based stack implimentation
#include <iostream>
using namespace std;

class Stack
{
    int top;
    int MAX;
    int *a;

public:
    Stack(int size)
    {
        top = -1;
        MAX = size;
        a = new int[MAX];
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

bool Stack::isEmpty()
{
    return (top < 0);
}

bool Stack::isFull()
{
    return (top == MAX - 1);
}

int Stack::peek()
{
    return a[top];
}
bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        top++;
        a[top] = x;
        return true;
    }
}
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return INT_MIN;
    }
    else
    {
        int x = a[top];
        top--;
        return x;
    }
}
int priority(char alpha)
{
    if (alpha == '+' || alpha == '-')
        return 1;
    if (alpha == '*' || alpha == '/')
        return 2;
    if (alpha == '^')
        return 3;

    return 0;
}

string convert(string infix)
{
    int i = 0;
    string postfix = "";

    Stack s(20);
    while (infix[i] != '\0')
    {
        // if operand add to the postfix expression
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix += infix[i];
            i++;
        }
        // if opening bracket then push the stack
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
            i++;
        }

        // if closing bracket encounted then keep popping from stack until
        // closing a pair opening bracket is not encountered
        else if (infix[i] == ')')
        {
            while (s.peek() != '(')
                postfix += s.pop();
            s.pop();
            i++;
        }
        else
        {
            while (!s.isEmpty() && priority(infix[i]) <= priority(s.peek()))
            {
                postfix += s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while (!s.isEmpty())
    {
        postfix += s.pop();
    }
    cout << "Postfix is : " << postfix;
    // it will print postfix conversion
    return postfix;
}

int main()
{
    string infix = "((a+(b*c))-d)";
    string postfix;
    postfix = convert(infix);
    return 0;
}
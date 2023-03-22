#include <stack>
#include <iostream>
using namespace std;

int main()
{
    // stack container declaration
    stack<int> Stack1;
    stack<int> Stack2;

    // pushing elements into first stack
    Stack1.push(1);
    Stack1.push(2);
    Stack1.push(3);
    Stack1.push(4);

    // pushing elements into 2nd stack
    Stack2.push(3);
    Stack2.push(5);
    Stack2.push(7);
    Stack2.push(9);

    // using swap() function to swap elements of stacks
    Stack1.swap(Stack2);

    // printing the first stack
    cout << "Stack1 = ";
    while (!Stack1.empty())
    {
        cout << Stack1.top() << " ";
        Stack1.pop();
    }

    // printing the second stack
    cout << endl
         << "Stack2 = ";
    while (!Stack2.empty())
    {
        cout << Stack2.top() << " ";
        Stack2.pop();
    }
    cout << endl;
    return 0;
}

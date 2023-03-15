#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> CustomStack;
    CustomStack.emplace(1);
    CustomStack.emplace(2);
    CustomStack.emplace(3);
    CustomStack.emplace(4);
    CustomStack.emplace(5);
    CustomStack.emplace(6);
    // stack becomes 1, 2, 3, 4, 5, 6

    // printing the stack
    cout << "CustomStack = ";
    while (!CustomStack.empty())
    {
        cout << CustomStack.top() << " ";
        CustomStack.pop();
    }
    return 0;
}



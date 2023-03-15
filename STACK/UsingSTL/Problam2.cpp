#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int sum = 0;
    stack<int> CustomStack;
    CustomStack.push(1);
    CustomStack.push(8);
    CustomStack.push(3);
    CustomStack.push(6);
    CustomStack.push(2);

    // Stack becomes 1, 8, 3, 6, 2

    while (CustomStack.size() > 0)
    {
        sum = sum + CustomStack.top();
        CustomStack.pop();
    }
    cout << sum<<endl;
    return 0;
}

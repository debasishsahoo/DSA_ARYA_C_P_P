#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int c = 0;

    // Empty stack
    stack<int> CustomStack;
    CustomStack.push(5);
    CustomStack.push(13);
    CustomStack.push(0);
    CustomStack.push(9);
    CustomStack.push(4);
    // stack becomes 5, 13, 0, 9, 4

    // Counting number of elements in queue
    while (!CustomStack.empty())
    {
        CustomStack.pop();
        c++;
    }
    cout << c<<endl;
}

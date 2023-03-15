// Print the balanced bracket expression using given brackets
/*
Given four integers a, b, c and d which signifies the number of four types of brackets.

    1:“((“
    2:“()”
    3:“)(“
    4:“))”

Input: a = 3, b = 1, c = 4, d = 3
Output: (((((()()()()())))))()
Input: a = 3, b = 1, c = 4, d = 8
Output: -1

The task is to print any balanced bracket expression using all the given brackets. If we cannot form a balanced bracket expression then print -1. In case of multiple answers, print any one.

Hint:(a == d && a) || (a == 0 && c == 0 && d == 0)
*/
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to print balanced bracket
// expression if it is possible
void printBalancedExpression(int a, int b, int c, int d)
{

    // If the condition is met
    if ((a == d && a) || (a == 0 && c == 0 && d == 0))
    {

        // Print brackets of type-1
        for (int i = 1; i <= a; i++)
            cout << "((";

        // Print brackets of type-3
        for (int i = 1; i <= c; i++)
            cout << ")(";

        // Print brackets of type-4
        for (int i = 1; i <= d; i++)
            cout << "))";

        // Print brackets of type-2
        for (int i = 1; i <= b; i++)
            cout << "()";
    }

    // If the condition is not met
    else
        cout << -1;
}

// Driver code
int main()
{
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    printBalancedExpression(a, b, c, d);

    return 0;
}

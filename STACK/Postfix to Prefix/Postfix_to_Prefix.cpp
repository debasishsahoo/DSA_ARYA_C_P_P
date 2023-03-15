// CPP Program to convert postfix to prefix
#include <bits/stdc++.h>
using namespace std;

// function to check if character is operator or not
bool isOperator(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

// Convert postfix to Prefix expression
string postToPre(string post_exp)
{
    stack<string> s;

    // length of expression
    int length = post_exp.size();

    // reading from right to left
    for (int i = 0; i < length; i++)
    {

        // check if symbol is operator
        if (isOperator(post_exp[i]))
        {

            // pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            // concat the operands and operator
            string temp = post_exp[i] + op2 + op1;

            // Push string temp back to stack
            s.push(temp);
        }

        // if symbol is an operand
        else
        {

            // push the operand to the stack
            s.push(string(1, post_exp[i]));
        }
    }

    string ans = "";
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    return ans;
}

// Driver Code
int main()
{
    /*

    Input :  Postfix : AB+CD-*
    Output : Prefix :  *+AB-CD
        Explanation : Postfix to Infix : (A+B) * (C-D)
                Infix to Prefix :  *+AB-CD

    Input :  Postfix : ABC/-AK/L-*
    Output : Prefix :  *-A/BC-/AKL
        Explanation : Postfix to Infix : ((A-(B/C))*((A/K)-L))
                Infix to Prefix :  *-A/BC-/AKL

    */
    string post_exp;
    cin >> post_exp;
    // Function call
    cout << postToPre(post_exp);
    return 0;
}

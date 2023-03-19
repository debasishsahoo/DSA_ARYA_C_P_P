// How to Reverse a String using Stack
/*
Input: str = debasish
Output: hsisabed

Input: str = abc
Output: cba
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

// passing str by reference because be need to do changes in str
// only not want to create any copy and when return it.
void the_helper(string &str)
{
    // stack which take char input.
    stack<char> s;
    // we push all char in stack.
    for (auto it : str)
        s.push(it);
    // here we clear all char present in str.
    str.clear();
    // as stack is LIFO DS we push_back all char and our string is reverse now.
    while (!s.empty())
    {
        str.push_back(s.top());
        s.pop();
    }
}
int main()
{
    // string we want to reverse.
    string str;

    cin >> str;
    // the function that make all necessary changes.
    the_helper(str);
    // finally return/output the reverse string
    cout << str;
    return 0;
}

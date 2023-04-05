#include <iostream>
#include <queue>
using namespace std;

template <typename T>
void ShowQ(queue<T> gq)
{
    queue<T> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

template <typename T>
void Check_Empty(queue<T> gq)
{
    queue<T> g = gq;
    if (g.empty())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

template <typename T>
void Do_Swap(queue<T> Q1, queue<T> Q2)
{
    cout << "The Before Swap Queue1 is : " << endl;
    ShowQ(Q1);
    cout << "The Before Swap Queue2 is : " << endl;
    ShowQ(Q2);

    Q1.swap(Q2);

    cout << "The After Swap Queue1 is : " << endl;
    ShowQ(Q1);
    cout << "The After Swap Queue2 is : " << endl;
    ShowQ(Q2);
}

// Driver Code
int main()
{
    queue<int> DemoQ;
    DemoQ.push(10);
    DemoQ.push(20);
    DemoQ.push(30);

    cout << "The queue DemoQ is : ";
    ShowQ(DemoQ);

    cout << "\nDemoQ.size() : " << DemoQ.size();
    cout << "\nDemoQ.front() : " << DemoQ.front();
    cout << "\nDemoQ.back() : " << DemoQ.back();

    cout << "\nDemoQ.pop() : ";
    DemoQ.pop();
    ShowQ(DemoQ);

    queue<int> Queue1, Queue2;

    for (int i = 1; i < 5; i++)
    {
        Queue1.push(i);
    }

    for (int i = 5; i < 9; i++)
    {
        Queue2.push(i);
    }

    Do_Swap(Queue1, Queue2);

    queue<int> NumQ;
    NumQ.emplace(5);
    NumQ.emplace(6);
    NumQ.emplace(1);
    NumQ.emplace(2);
    NumQ.emplace(3);
    NumQ.emplace(4);

    cout << endl
         << "NumQ= ";
    ShowQ(NumQ);

    queue<char> CharQ;
    CharQ.emplace('k');
    CharQ.emplace('j');
    CharQ.emplace('y');
    CharQ.emplace('r');
    CharQ.emplace('y');
    CharQ.emplace('u');
    cout << endl
         << "CharQ= ";
    ShowQ(CharQ);

    return 0;
}

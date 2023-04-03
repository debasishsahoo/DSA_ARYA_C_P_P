#include <iostream>
#include <queue>

using namespace std;

template <typename T>
// Print the queue
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

    cout << "The Before Swap Queue1 is : ";
    ShowQ(Queue1);

    for (int i = 5; i < 10; i++)
    {
        Queue2.push(i);
    }

    cout << "The Before Swap Queue2 is : ";
    ShowQ(Queue2);

    // Swap elements of queues
    Queue1.swap(Queue2);

    // Print the first queue
    cout << "After SWAP queue1 = ";
    ShowQ(Queue1);
    // Print the second set
    cout << endl
         << "After SWAP queue2 = ";
    ShowQ(Queue2);
    cout << endl;

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

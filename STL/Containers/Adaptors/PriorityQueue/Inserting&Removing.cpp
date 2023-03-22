// C++ Program to demonstrate various
// method/function in Priority Queue
#include <iostream>
#include <queue>
using namespace std;

// Implementation of priority queue
void ShowPQ(priority_queue<int> ArgQ)
{
    priority_queue<int> g = ArgQ;
    while (!g.empty())
    {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

void Check_isEmpty(priority_queue<int> ArgQ)
{
    if (ArgQ.empty())
    {
        cout << "Empty or true";
    }
    else
    {
        cout << "Contains element or False";
    }
    cout << '\n';
}
// Driver Code
int main()
{
    priority_queue<int> PQ;

    Check_isEmpty(PQ);

    // used in inserting the element
    PQ.push(10);
    PQ.push(30);
    PQ.push(20);
    PQ.push(5);
    PQ.push(1);
    Check_isEmpty(PQ);
    cout << "The priority queue PQ is : ";

    // used for highlighting the element
    ShowPQ(PQ);

    // used for identifying the size
    // of the priority queue
    cout << "\nPQ.size() : " << PQ.size();
    // used for telling the top element
    // in priority queue
    cout << "\nPQ.top() : " << PQ.top();

    // used for popping the element
    // from a priority queue
    cout << "\nPQ.pop() : ";
    PQ.pop();
    ShowPQ(PQ);

    priority_queue<int> pq1;
    priority_queue<int> pq2;
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);

    // pushing elements into the 2nd priority queue
    pq2.push(3);
    pq2.push(5);
    pq2.push(7);
    pq2.push(9);

    cout << "Before swapping:-" << endl;
    cout << "Priority Queue 1 = ";
    ShowPQ(pq1);
    cout << "Priority Queue 2 = ";
    ShowPQ(pq2);

    // using swap() function to swap elements of priority
    // queues
    pq1.swap(pq2);

    cout << endl
         << "After swapping:-" << endl;
    cout << "Priority Queue 1 = ";
    ShowPQ(pq1);
    cout << "Priority Queue 2 = ";
    ShowPQ(pq2);

    priority_queue<int> pq;
    pq.emplace(1);
    pq.emplace(2);
    pq.emplace(3);
    pq.emplace(4);
    pq.emplace(5);
    pq.emplace(6);
    cout << "Priority Queue emplace = ";
    ShowPQ(pq);

    // declare integer value_type for priority queue
    priority_queue<int>::value_type AnInt;

    // declare string value_type for priority queue
    priority_queue<string>::value_type AString;

    // Declares priority_queues
    priority_queue<int> q1;
    priority_queue<string> q2;

    // Here AnInt acts as a variable of int data type
    AnInt = 20;
    cout << "The value_type is AnInt = " << AnInt << endl;
    q1.push(AnInt);
    AnInt = 30;
    q1.push(AnInt);
    cout << "Top element of the integer priority_queue is: "
         << q1.top() << endl;

    // here AString acts as a variable of string data type
    AString = "Mr.";
    cout << endl
         << "The value_type is AString = " << AString
         << endl;
    q2.push(AString);
    AString = "Debasish";
    q2.push(AString);
    AString = "Sahoo";
    q2.push(AString);

    cout << "Top element of the string priority_queue is: "
         << q2.top() << endl;

    return 0;
}

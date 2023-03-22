#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;

    // assign 5 values of 10 each
    dq.assign(5, 10);

    cout << "The deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";

    // re-assigns 10 values of 15 each
    dq.assign(11, 15);
    dq.assign(dq.begin() + 1, dq.end());

    cout << "\nThe deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";

    deque<int> DQ = {10, 20, 30, 40, 50};

    cout << "Size before resize " << DQ.size() << "\n";

    // Prints the deque elements
    cout << "The contents of deque :";
    for (auto it = DQ.begin(); it != DQ.end(); ++it)
        cout << *it << " ";

    cout << endl;

    // resize to 3
    DQ.resize(3);

    cout << "Size after resize " << DQ.size() << "\n";

    cout << "The contents of deque :";
    for (auto it = DQ.begin(); it != DQ.end(); ++it)
        cout << *it << " ";
    return 0;
}

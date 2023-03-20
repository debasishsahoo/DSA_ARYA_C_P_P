#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> DQ1;
    DQ1.emplace_front(1);
    DQ1.emplace_front(2);
    DQ1.emplace_front(3);
    DQ1.emplace_front(4);
    DQ1.emplace_front(5);
    DQ1.emplace_front(6);

    // deque becomes 6, 5, 4, 3, 2, 1

    // printing the deque
    for (auto it = DQ1.begin(); it != DQ1.end(); ++it)
        cout << ' ' << *it;

    deque<int> DQ2;
    DQ2.emplace_back(1);
    DQ2.emplace_back(2);
    DQ2.emplace_back(3);
    DQ2.emplace_back(4);
    DQ2.emplace_back(5);
    DQ2.emplace_back(6);
    // deque becomes 1, 2, 3, 4, 5, 6

    // printing the deque
    for (auto it = DQ2.begin();
         it != DQ2.end(); ++it)
        cout << ' ' << *it;

    return 0;
}

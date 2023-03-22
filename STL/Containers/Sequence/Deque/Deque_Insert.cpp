#include <deque>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    // Insert
    deque<int> dq1 = {1, 2, 3, 4, 5};

    deque<int>::iterator it = dq1.begin();
    ++it;

    it = dq1.insert(it, 10); // 1 10 2 3 4 5
    dq1.insert(it, 2, 0);    // 1 0 0  10 2 3 4 5

    vector<int> v(2, 10);
    dq1.insert(it, v.begin(), v.end()); // 0 0 1 10 10 2 3 4 5

    std::cout << "Deque contains:";
    for (it = dq1.begin(); it != dq1.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    deque<int> dq2 = {10, 20, 30, 40, 50};

    cout << "The deque in reverse order: ";
    // prints the elements in reverse order
    for (auto it = dq2.rbegin(); it != dq2.rend(); ++it)
        cout << *it << " ";
    cout << '\n';

    deque<char> dq3 = {'a', 'b', 'c', 'd', 'e'};

    cout << "The deque in reverse order: ";
    // prints the elements in reverse order
    for (auto it = dq3.rbegin(); it != dq3.rend(); ++it)
        cout << *it << " ";
    cout << '\n';

    // Create a deque
    deque<int> dq4 = {2, 5, 7, 8, 6};

    // Print the first element of deque
    // using cbegin() method
    cout << "First element of the deque is: ";

    // Get the iterator pointing to the first element
    // And dereference it
    cout << *dq4.cbegin();
    cout << '\n';

    // Create a deque
    deque<int> dq5 = {1, 5, 2, 4, 7};

    // Insert an element at the front
    dq5.push_front(45);

    // Insert an element at the back
    dq5.push_back(56);

    // Print the first element of deque
    // using cbegin() method
    cout << "First element of the deque is: ";

    // Get the iterator pointing to the first element
    // And dereference it
    cout << *dq5.cbegin();
    cout << '\n';

    return 0;
}

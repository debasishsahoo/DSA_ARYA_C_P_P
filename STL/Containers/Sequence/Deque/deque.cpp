#include <deque>
#include <vector>
#include <iostream>
using namespace std;

void show_DQ(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque<int> sampleDeque;
    sampleDeque.push_back(10);
    sampleDeque.push_front(20);
    sampleDeque.push_back(30);
    sampleDeque.push_front(15);
    cout << "The deque sampleDeque is : ";
    show_DQ(sampleDeque);

    cout << "\nsampleDeque.size() : " << sampleDeque.size();
    cout << "\nsampleDeque.max_size() : " << sampleDeque.max_size();

    cout << "\nsampleDeque.at(2) : " << sampleDeque.at(2);
    cout << "\nsampleDeque.front() : " << sampleDeque.front();
    cout << "\nsampleDeque.back() : " << sampleDeque.back();

    cout << "\nsampleDeque.pop_front() : ";
    sampleDeque.pop_front();
    show_DQ(sampleDeque);

    cout << "\nsampleDeque.pop_back() : ";
    sampleDeque.pop_back();
    show_DQ(sampleDeque);

    // Insert
    deque<int> dq1 = {1, 2, 3, 4, 5};`

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

    deque<int> DQ;
    DQ.push_back(3);
    DQ.push_back(4);
    DQ.push_back(1);
    DQ.push_back(7);
    DQ.push_back(3);
    // Queue becomes 3, 4, 1, 7, 3

    cout << DQ.front();
    cout << DQ.back();

    deque<int> mDQ{1, 2, 3, 4, 5};

    mDQ.clear();
    // Deque becomes empty

    // Printing the deque
    for (auto it = mDQ.begin(); it != mDQ.end(); ++it)
        cout << ' ' << *it;

    deque<int> nDQ1{1, 2, 3, 4, 5};
    deque<int>::iterator it1;

    it1 = nDQ1.begin();
    nDQ1.erase(it1);

    // Printing the deque
    for (auto it1 = nDQ1.begin(); it1 != nDQ1.end(); ++it1)
        cout << ' ' << *it1;

    deque<int> nDQ2{1, 2, 3, 4, 5};
    deque<int>::iterator it3, it4;

    it3 = nDQ2.begin();
    it4 = nDQ2.end();
    it4--;
    it4--;

    nDQ2.erase(it3, it4);

    // Printing the deque
    for (auto it = nDQ2.begin(); it != nDQ2.end(); ++it)
        cout << ' ' << *it;

    deque<int> aDQ;

    // deque becomes 1
    if (aDQ.empty())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    deque<int> xDQ{1, 2, 3};
    deque<int> yDQ{3, 2, 1, 4};
    xDQ = yDQ;
    cout << "yDQ = ";
    for (auto it = yDQ.begin(); it != yDQ.end(); ++it)
        cout << ' ' << *it;

    cout << yDQ[3];
    cout << yDQ.at(1);

    for (int i = 0; i < yDQ.size(); ++i)
    {
        if (i % 2 == 0)
        {
            cout << yDQ[i];
            cout << " ";
        }
    }
    // deque container declaration
    deque<int> DQ1{1, 2, 3, 4};
    deque<int> DQ2{3, 5, 7, 9};

    // using swap() function to swap elements of deques
    DQ1.swap(DQ2);

    // printing the first deque
    cout << "DQ1 = ";
    for (auto it = DQ1.begin(); it < DQ1.end(); ++it)
        cout << *it << " ";

    // printing the second deque
    cout << endl
         << "DQ2 = ";
    for (auto it = DQ2.begin(); it < DQ2.end(); ++it)
        cout << *it << " ";

    return 0;
}



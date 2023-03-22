// CPP program to illustrate the
// list::erase() function
#include <bits/stdc++.h>
using namespace std;
// Predicate implemented as a function
bool even(const int &value) { return (value % 2) == 0; }
int main()
{
    // Creating a list
    list<int> demoList;

    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
    demoList.push_back(50);

    // Printing elements of list before deleting
    // first element
    cout << "List before deleting first element: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    {
        cout << *itr << " ";
    }

    // Creating iterator to point to first
    // element in the list
    list<int>::iterator itr = demoList.begin();

    // deleting the first element
    demoList.erase(itr);

    // Printing elements of list after deleting
    // first element
    cout << "\nList after deleting first element:";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // Creating iterators of the list
    list<int>::iterator itr1, itr2;
    itr1 = demoList.begin();
    itr2 = demoList.begin();

    // Incrementing itr2 by 3 positions
    advance(itr2, 3);

    // deleting range of elements from index [0, 3)
    demoList.erase(itr1, itr2);

    // Printing elements of list after deleting
    // range of elements from [0, 3)
    cout << "\nList after deleting first three elements: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    list<int> nList{1, 2, 2, 2, 5, 6, 7};
    nList.remove(2);
    for (auto it = nList.begin(); it != nList.end(); ++it)
        cout << ' ' << *it;

    list<int> mList{1, 2, 2, 2, 5, 6, 7};
    mList.remove_if(even);
    for (auto it = mList.begin(); it != mList.end(); ++it)
        cout << ' ' << *it;

    return 0;
}

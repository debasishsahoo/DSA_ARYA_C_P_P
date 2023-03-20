#include <bits/stdc++.h>
using namespace std;

int main()
{
    // initializing lists
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5};
    list<int> l3 = {6, 7, 8};

    // transfer all the elements of l2
    l1.splice(l1.begin(), l2);

    // at the beginning of l1
    cout << "list l1 after splice operation" << endl;
    for (auto x : l1)
        cout << x << " ";

    // transfer all the elements of l1
    l3.splice(l3.end(), l1);

    // at the end of l3
    cout << "\nlist l3 after splice operation" << endl;
    for (auto x : l3)
        cout << x << " ";

    cout << endl;

    list<int> L1 = {1, 2, 3};
    list<int> L2 = {4, 5};
    list<int>::iterator it;

    // Iterator pointing to 4
    it = L2.begin();

    // transfer 4 at the end of l1
    l1.splice(L1.end(), L2, it);

    cout << "list L1 after splice operation" << endl;
    for (auto x : L1)
        cout << x << " ";

    cout << endl;

    // initializing lists and iterator
    list<int> ll1 = {1, 2, 3, 4, 5};
    list<int> ll2 = {6, 7, 8};
    list<int>::iterator it1;

    // iterator pointing to 1
    it1 = ll1.begin();

    // advance the iterator by 2 positions
    advance(it1, 2);

    // transfer 3, 4 and 5 at the
    // beginning of l2
    l2.splice(ll2.begin(), ll1, it1, ll1.end());

    cout << "list ll2 after splice operation" << endl;
    for (auto x : ll2)
        cout << x << " ";

    cout << endl;

    list<int> lis = {5, 6, 7, 8, 9, 10};

    auto it = lis.emplace(lis.begin(), 2);

    // inserts at the beginning of the list
    lis.emplace(it, 1);

    cout << "List: ";
    for (auto it = lis.begin(); it != lis.end(); ++it)
        cout << *it << " ";

    return 0;
}

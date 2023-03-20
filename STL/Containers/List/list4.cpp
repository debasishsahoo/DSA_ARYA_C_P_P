#include <bits/stdc++.h>
using namespace std;

template <typename T>
void ShowList(list<T> g)
{
    for (auto it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

// Function for binary_predicate
bool compare(double a, double b)
{
    return ((int)a == (int)b);
}

// Driver code
int main()
{
    list<double> LIST = {2.55, 3.15, 4.16, 4.16, 4.77, 12.65, 12.65, 13.59};

    cout << "LIST is: ";
    ShowList(LIST);
    // sort the LIST
    LIST.sort();
    cout << "after sort List is: ";
    ShowList(LIST);
    // unique operation on LIST with no parameters
    LIST.unique();
    cout << "after unique List is: ";
    ShowList(LIST);

    // unique operation on LIST with parameter
    LIST.unique(compare);

    cout << "\nList is: ";
    ShowList(LIST);

    LIST.clear();
    cout << "\n after clear List is: ";
    ShowList(LIST);

    list<int> listX{1, 2, 3, 4};
    list<int> listY{3, 5, 7, 9};
    listX.swap(listY);
    cout << "\n after Swap ListX is: ";
    ShowList(listX);
    cout << "\n after Swap ListY is: ";
    ShowList(listY);

    return 0;
}

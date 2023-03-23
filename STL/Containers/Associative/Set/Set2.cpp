#include <bits/stdc++.h>
using namespace std;

template <typename T>
void ShowSet(set<T> ArgSet)
{
    for (auto it = ArgSet.begin(); it != ArgSet.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{

    set<int> SET1;

    // Function to insert elements
    // in the set container
    SET1.insert(1);
    SET1.insert(4);
    SET1.insert(2);
    SET1.insert(5);
    SET1.insert(3);

    cout << "The elements in SET1 are: ";
    ShowSet(SET1);

    set<int> SET2;
    SET2.insert(SET1.find(3), SET1.end());

    cout << "\nThe elements in SET2 are: ";
    ShowSet(SET2);

    cout << "\nAfter Clear SET2 are: ";
    SET2.clear();
    ShowSet(SET2);

    set<int> SET3;
    set<int>::key_compare comp = SET1.key_comp();

    for (int i = 0; i <= 10; i++)
        SET3.insert(i);

    cout << "SET3 a has the numbers: ";

    // stores the last value of the set
    int l = *SET3.rbegin();

    // initialising the iterator
    set<int>::iterator it = SET3.begin();

    // printing elements of all set
    do
    {
        cout << *it << " ";
    } while (comp(*(++it), l));

    cout << endl;
    auto pos = SET3.find(3);
    cout << "Position of 3 in SET3:";
    cout << "The set elements after 3 are: ";
    for (auto it = pos; it != SET3.end(); it++)
        cout << *it << " ";
    cout << endl;

    // finding position of 6
    pos = SET3.find(6);

    // print element position if it is present in set
    if (pos != SET3.end())
        cout << "Element found at position : "
             << distance(SET3.begin(), pos) << endl;
    else
        cout << "Element not present in set";

    int arr[] = {14, 12, 15, 11, 10};

    // initializes the set from an array
    set<int> SET4(arr, arr + 5);

    // check if 11 is present or not
    if (SET4.count(11))
        cout << "11 is present in the set\n";
    else
        cout << "11 is not present in the set\n";

    // checks if 18 is present or not
    if (SET4.count(18))
        cout << "18 is present in the set\n";
    else
        cout << "18 is not present in the set\n";

    return 0;
}

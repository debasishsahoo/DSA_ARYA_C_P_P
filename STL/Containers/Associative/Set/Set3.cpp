#include <bits/stdc++.h>
using namespace std;

template <typename T>
void ShowSet(set<T> ArgSet)
{
    for (auto it = ArgSet.begin(); it != ArgSet.end(); it++)
        cout << *it << " ";
    cout << endl;
}

template <typename T>
void SetLowerBound(set<T> ArgSet, T n)
{
    auto it = ArgSet.lower_bound(n);
    if (it != ArgSet.end())
    {
        cout << "\nThe lower bound of key " << n << " is";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"
             << endl;
}

template <typename T>
void SetUpperBound(set<T> ArgSet, T n)
{
    auto it = ArgSet.upper_bound(n);
    if (it == ArgSet.end())
    {
        cout << "The given key is greater "
                "than or equal to the largest element \n";
    }
    else
        cout << "The immediate greater element "
             << "is " << *it << endl;
}

template <typename T>
void GetEqualRange(set<T> ArgSet, T n)
{
    auto it = ArgSet.equal_range(n);
    cout << "\nThe lower bound of " << n << " is " << *it.first << "\n";
    cout << "\nThe upper bound of " << n << " is" << *it.second << "\n";
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
    SET1.insert(6);

    cout << "The set elements are: ";
    ShowSet(SET1);
    // when 2 is present
    SetLowerBound(SET1, 2);
    // when 3 is not present
    // points to next greater after 3
    SetLowerBound(SET1, 3);
    // when 8 exceeds the max element in set
    SetLowerBound(SET1, 8);

    cout << "\nThe upper bound of key 2 is ";
    SetUpperBound(SET1, 2);
    // when 3 is not present
    // points to next greater after 3
    cout << "The upper bound of key 3 is ";
    SetUpperBound(SET1, 3);
    // when 8 exceeds the max element in set
    cout << "The upper bound of key 8 is ";
    SetUpperBound(SET1, 8);

    cout << "The Equal Range of 2 is " << endl;
    GetEqualRange(SET1, 2);
    cout << "The Equal Range of 8 is " << endl;
    GetEqualRange(SET1, 8);
    cout << "The Equal Range of 0 is " << endl;
    GetEqualRange(SET1, 0);

    return 0;
}

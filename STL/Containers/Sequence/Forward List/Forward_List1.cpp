#include <forward_list>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // Declaring forward list
    forward_list<int> ListF1;

    // Declaring another forward list
    forward_list<int> ListF2;

    // Declaring another forward list
    forward_list<int> ListF3;

    // Assigning values using assign()
    ListF1.assign({1, 2, 3});

    // Assigning repeating values using assign()
    // 5 elements with value 10
    ListF2.assign(5, 10);

    // Assigning values of list 1 to list 3
    ListF3.assign(ListF1.begin(), ListF1.end());

    // Displaying forward lists
    cout << "The elements of first forward list are : ";
    for (int &a : ListF1)
        cout << a << " ";
    cout << endl;

    cout << "The elements of second forward list are : ";
    for (int &b : ListF2)
        cout << b << " ";
    cout << endl;

    cout << "The elements of third forward list are : ";
    for (int &c : ListF3)
        cout << c << " ";
    cout << endl;

    return 0;
}

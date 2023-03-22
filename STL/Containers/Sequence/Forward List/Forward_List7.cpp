#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    // Initializing 1st forward list
    forward_list<int> ListF1 = {1, 2, 3};

    // Declaring 2nd forward list
    forward_list<int> ListF2;

    // Creating deep copy using "="
    ListF2 = ListF1;

    // Displaying ListF2
    cout << "The contents of 2nd forward list"
            " after copy are : ";
    for (int &x : ListF2)
        cout << x << " ";
    cout << endl;

    // Using merge() to merge both list in 1
    ListF1.merge(ListF2);

    // Displaying merged forward list
    // Prints sorted list
    cout << "The contents of forward list "
            "after merge are : ";
    for (int &x : ListF1)
        cout << x << " ";
    cout << endl;

    return 0;
}

// C++ code to demonstrate working of
// insert_after(), emplace_after()
// and erase_after()
#include <forward_list>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // Initializing forward list
    forward_list<int> ListF = {10, 20, 30};

    // Declaring a forward list iterator
    forward_list<int>::iterator ptr;

    // Inserting value using insert_after()
    // starts insertion from second position
    ptr = ListF.insert_after(ListF.begin(), {1, 2, 3});

    // Displaying the forward list
    cout << "The forward list after insert_after operation "
            ": ";
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    // Inserting value using emplace_after()
    // inserts 2 after ptr
    ptr = ListF.emplace_after(ptr, 2);

    // Displaying the forward list
    cout << "The forward list after emplace_after "
            "operation : ";
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    // Deleting value using erase.after Deleted 2
    // after ptr
    ptr = ListF.erase_after(ptr);
    cout << "The forward list after erase_after operation "
            ": ";
    // Displaying the forward list
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    // Deleting value in a range
    // another variant of erase which uses start and end iterator
    // and deletes all the values in between them
    ptr = ListF.erase_after(ListF.begin(), ListF.end());
    cout << "The forward list after erase_after (range) operation "
            ": ";
    // Displaying the forward list
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    return 0;
}

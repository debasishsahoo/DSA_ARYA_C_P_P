#include <iostream>
#include <forward_list> // for sort() and unique()
using namespace std;

int main()
{
    // Initializing 1st forward list
    forward_list<int> ListF1 = {1, 2, 3, 2, 3, 3, 1};

    // Sorting the forward list using sort()
    ListF1.sort();

    // Displaying sorted forward list
    cout << "The contents of forward list after "
            "sorting are : ";
    for (int &x : ListF1)
        cout << x << " ";
    cout << endl;

    // Use of unique() to remove repeated occurrences
    ListF1.unique();

    // Displaying forward list after using unique()
    cout << "The contents of forward list after "
            "unique operation are : ";
    for (int &x : ListF1)
        cout << x << " ";
    cout << endl;

    return 0;
}

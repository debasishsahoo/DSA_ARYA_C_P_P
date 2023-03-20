#include <forward_list> // for using forward list
#include <iostream>
using namespace std;

int main()
{
    // creating forward list
    forward_list<int> ListF{1, 2, 3, 4, 5};

    // Printing forward list
    cout << "Forward list: ";
    for (auto i : ListF)
    {
        cout << i << " ";
    }
    cout << endl;

    ListF.clear();
    // Forward List becomes empty

    // Printing the Forward list
    cout << "Forward list after using clear function: ";
    for (auto it = ListF.begin(); it != ListF.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    return 0;
}

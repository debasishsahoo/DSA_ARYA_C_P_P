#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    // Initializing forward list
    forward_list<int> ListF1 = {
        1,
        2,
        3,
    };

    // Displaying forward list before clearing
    cout << "The contents of forward list are : ";
    for (int &x : ListF1)
        cout << x << " ";
    cout << endl;

    // Using clear() to clear the forward list
    ListF1.clear();

    // Displaying list after clear() performed
    cout << "The contents of forward list after "
         << "clearing are : ";
    for (int &x : ListF1)
        cout << x << " ";
    cout << endl;

    // Checking if list is empty
    ListF1.empty() ? cout << "Forward list is empty" : cout << "Forward list is not empty";

    return 0;
}

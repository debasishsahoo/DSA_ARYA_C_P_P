#include <forward_list>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // Initializing forward list
    forward_list<int> ListF = {10, 20, 30, 40, 50};

    // Inserting value using push_front()
    // Inserts 60 at front
    ListF.push_front(60);

    // Displaying the forward list
    cout
        << "The forward list after push_front operation : ";
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    // Inserting value using emplace_front()
    // Inserts 70 at front
    ListF.emplace_front(70);

    // Displaying the forward list
    cout << "The forward list after emplace_front "
            "operation : ";
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    // Deleting first value using pop_front()
    // Pops 70
    ListF.pop_front();

    // Displaying the forward list
    cout << "The forward list after pop_front operation : ";
    for (int &c : ListF)
        cout << c << " ";
    cout << endl;

    return 0;
}

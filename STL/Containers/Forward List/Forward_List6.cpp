#include <forward_list> // for splice_after()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // Initializing forward list
    forward_list<int> ListF1 = {10, 20, 30};

    // Initializing second list
    forward_list<int> ListF2 = {40, 50, 60};

    // Shifting elements from first to second
    // forward list after 1st position
    ListF2.splice_after(ListF2.begin(), ListF1);

    // Displaying the forward list
    cout << "The forward list after splice_after operation "
            ": ";
    for (int &c : ListF2)
        cout << c << " ";
    cout << endl;

    return 0;
}

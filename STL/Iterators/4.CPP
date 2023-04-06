// C++ code to demonstrate the working of
// inserter()
#include <iostream>
#include <iterator> // for iterators
#include <vector>   // for vectors
using namespace std;
int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    vector<int> ar1 = {10, 20, 30};

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();

    // Using advance to set position
    advance(ptr, 3);

    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));

    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar)
        cout << x << " ";

    return 0;
}

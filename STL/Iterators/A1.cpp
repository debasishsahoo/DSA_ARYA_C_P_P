#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 1, 2};

    // Declaring an iterator
    vector<int>::iterator i;
    // Inserting element
    for (i = vec1.begin(); i != vec1.end(); ++i)
    {
        if (i == vec1.begin())
        {
            i = vec1.insert(i, 3); // insert 3 at the beginning of vec1
        }
    }
    // contents of vec1 3 1 1 2
    cout << "Vector contents after addition";
    cout << endl;
    for (i = vec1.begin(); i != vec1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (i = vec1.begin(); i != vec1.end(); ++i)
    {
        if (i == vec1.begin() + 1)
        {
            i = vec1.erase(i); // this deletes 2nd element
        }
    }
    cout << "Vector contents after deletion";
    cout << endl;
    for (i = vec1.begin(); i != vec1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
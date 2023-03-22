// CPP program to illustrate
// Application of erase() function
#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> mDQ{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int>::iterator i;
    i = mDQ.begin();
    while (i != mDQ.end())
    {
        if (*i % 2 == 0)
            /* Not a good idea to erase inside loop, if you delete last element,
            mDQ.end() cannot be found resulting in infinite loop */
            mDQ.erase(i);
        i++;
    }

    // Printing the deque
    for (auto it = mDQ.begin(); it != mDQ.end(); ++it)
        cout << ' ' << *it;
    return 0;
}

// Example:

#include <iostream>
using namespace std;

template <class T>
void show(T a, T b)
{
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

main()
{
    show(2, 5);
    show(2.6, 7.6);
    show('a', 'b');
    return 0;
}

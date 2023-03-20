#include <iostream>
using namespace std;

template <class T>
void getMax(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    cout << endl
         << "Maximum:" << result;
}

template <class T>
T GetMax(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    return result;
}









main()
{
    getMax(2, 5);
    getMax(2.6, 7.6);
    getMax('A', 'D');

    int a = GetMax(2, 5);
    double d = GetMax(2.6, 7.6);
    cout << endl
         << a;
    cout << endl
         << d;
    return 0;
}

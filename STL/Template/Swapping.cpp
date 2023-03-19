#include <iostream>
using namespace std;

template <class T>
void swapFunction(T &a, T &b)
{
     T temp;
     temp = a;
     a = b;
     b = temp;
}

main()
{
     int a = 10, b = 20;
     double x = 20.3, y = 55.3;

     cout << endl
          << "Before Swap" << endl;
     cout << endl
          << "A=" << a << "\t"
          << "B=" << b;
     cout << endl
          << "X=" << x << "\t"
          << "Y=" << y;

     swapFunction(a, b);
     swapFunction(x, y);

     cout << endl
          << endl
          << "After Swap" << endl;
     cout << endl
          << "A=" << a << "\t"
          << "B=" << b;
     cout << endl
          << "X=" << x << "\t"
          << "B=" << y;

     return 0;
}

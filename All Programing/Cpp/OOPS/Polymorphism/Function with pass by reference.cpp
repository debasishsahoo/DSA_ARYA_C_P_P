#include <iostream>
using namespace std;
void fun1(int);
void fun2(int &);
int main()
{
    int a = 10;
    fun1(a);
    fun2(a); // error, which f()?
    return 0;
}
void fun1(int x)
{
    std::cout << "Value of x is : " << x << std::endl;
}
void fun2(int &b)
{
    std::cout << "Value of b is : " << b << std::endl;
}

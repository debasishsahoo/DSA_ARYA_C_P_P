#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        std::cout << "The value of a is : " << a << std::endl;
        std::cout << "The value of b is : " << b << std::endl;
        cout << "Addition of a and b is : " << a + b;
    }
};
int main()
{
    C c;
    C c1;
    C c2;
    c.get_a(10);
    c.get_b(20);
    c.display();
    return 0;
}

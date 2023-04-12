#include <iostream>
using namespace std;
int mul(int, int);
int mul(int, int, int);
float mul(float, int);

int mul(int a, int b)
{
    return a * b;
}
int mul(int a, int b, int c)
{
    return a * b * c;
}
float mul(double x, int y)
{
    return x * y;
}
int main()
{
    int r1 = mul(6, 7);
    float r2 = mul(0.2, 3);
    float r3 = mul(2, 3, 4);
    std::cout << "r1 is : " << r1 << std::endl;
    std::cout << "r2 is : " << r2 << std::endl;
    std::cout << "r3 is : " << r3 << std::endl;
    return 0;
}

#include <iostream>
using namespace std;
class sum
{
    int a = 4;
    int b = 5;

public:
    int add()
    {
        int c = a + b;
        return c;
    }
};

class view : private sum
{
public:
    void display()
    {
        int result = add();
        std::cout << "addition of a and b is : " << result << std::endl;
    }
};

int main()
{
    view vi;
    vi.display();

    return 0;
}

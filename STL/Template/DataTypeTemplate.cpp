// C++ program to show different data types using a
// constructor and template.
#include <iostream>
#include <conio.h>
using namespace std;

// somewhere in the program
#define WINDOWS 1

void console_clear_screen()
{
#ifdef WINDOWS
    system("cls");
#endif
#ifdef LINUX
    system("clear");
#endif
}

// defining a class template
template <class T>
class info
{
public:
    // constructor of type template
    info(T A)
    {
        cout << "\n"
             << "A = " << A
             << " size of data in bytes:" << sizeof(A)<<endl;
    }
    // end of info()
}; // end of class

// Main Function
int main()
{
    console_clear_screen();
    // passing character value by creating an objects
    info<char> p('x');

    // passing integer value by creating an object
    info<int> q(22);

    // passing float value by creating an object
    info<float> r(2.25);

    return 0;
}

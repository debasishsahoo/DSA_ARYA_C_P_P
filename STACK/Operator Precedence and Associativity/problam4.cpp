#include <iostream>
using namespace std;

int main(void)
{

    int x, y;

    x = 20 / 2 + 3;   /* Division will take place before addition. */
    y = 20 / (2 + 3); /* Addition will take place before division. */

    cout << x << endl;
    cout << y << endl;

    return 0;
}
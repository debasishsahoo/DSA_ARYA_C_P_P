#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, i;

    // printf("Enter an integer: ");
    cout << "Enter an integer:" << endl;
    // scanf("%d", &n);
    cin >> n;

    for (i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}

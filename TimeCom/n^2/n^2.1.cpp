#include <iostream>
using namespace std;

int demo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " " << j << endl;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    demo(n);
    return 0;
}

/*
i     j
1     1
2     2
3     3
.......
.......
n     n
   ------------
   1+2+3+4+......n terms
= n(n+1)/2 = n^2/2 + n/2
=1/2 * n^2
= c  * g(n) = O(n^2)
*/

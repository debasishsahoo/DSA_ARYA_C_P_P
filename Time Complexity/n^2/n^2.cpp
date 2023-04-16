#include <iostream>
using namespace std;

int demo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
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
O(1) + O(n ^ 2) + O(1) = > O(n ^ 2)

i      j
1      n
2      n
3      n


n      n
     -------------------
     n+ n +n +.......n times (n^2)

2+2 = 4 = 2^2
3+3+3 = 9 = 3^2
4+4+4+4 = 16 = 4^2
*/

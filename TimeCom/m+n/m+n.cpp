#include <iostream>
using namespace std;





int fact1(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int fact2(int m)
{
    int f = 1;
    for (int i = 1; i <= m; i++)
        f = f * i;
    return f;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    cout << fact1(n) << endl;
    cout << fact1(m);
    return 0;
}

/*
O(1) + O(m) + O(n) + O(1)







O(m+n)
if m = n O(2n) -> O(n)
*/

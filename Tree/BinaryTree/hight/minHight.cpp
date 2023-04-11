#include <iostream>
#include <cmath>
using namespace std;

int getMinHeight(int n)
{
    return ceil(log2(n + 1)) - 1;
}

int getMaxHeight(int n)
{
    return n - 1;
}

int main()
{
    int n = 10; // Example number of nodes
    int minHeight = getMinHeight(n);
    cout << "Minimum height of a binary tree with " << n << " nodes: " << minHeight << endl;
    int maxHeight = getMaxHeight(n);
    cout << "Maximum height of a binary tree with " << n << " nodes: " << maxHeight << endl;
    return 0;
}

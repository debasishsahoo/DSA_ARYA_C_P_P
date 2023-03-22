#include <iostream>
#include <queue>
using namespace std;
template <typename T>
void ShowPQ(priority_queue<T, vector<T>, greater<T>> ArgQ)
{
    priority_queue<T, vector<T>, greater<T>> g = ArgQ;
    while (!g.empty())
    {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}
template <typename T>
void showArray(T *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// Driver Code
int main()
{
    int arr[6] = {10, 2, 4, 8, 6, 9};
    priority_queue<int, vector<int>, greater<int>> PQ(
        arr, arr + 7);

    cout << "Array: ";
    showArray(arr, 6);

    cout << "Priority Queue : ";
    ShowPQ(PQ);

    return 0;
}

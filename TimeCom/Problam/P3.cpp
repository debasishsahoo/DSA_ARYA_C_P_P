#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    // Write your code here
    int sum = 0;
    for (int i = 0; i < n; i += 1)
    {
        sum += arr[i];
    }
    int sumOfN_2El = ((n - 2) * (n - 1) / 2);
    int ans = sum - sumOfN_2El;
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findDuplicate(input, size) << endl;
    }

    return 0;
}
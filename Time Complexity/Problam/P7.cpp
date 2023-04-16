#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *arr, int start, int end, int target)
{
    int finalCount = 0;
    while (start < end)
    {
        if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            int startIndex = start;
            int endIndex = end;

            if (arr[start] == arr[end])
            {
                int betweenIndex = (end - start) + 1;
                finalCount += (betweenIndex * (betweenIndex - 1)) / 2;
                return finalCount;
            }
            int newStart = start + 1;
            int newEnd = end - 1;
            while (newStart <= newEnd && arr[newStart] == arr[start])
            {
                newStart++;
            }
            while (newStart <= newEnd && arr[newEnd] == arr[end])
            {
                newEnd--;
            }
            int eleFromStart = newStart - start;
            int eleFromEnd = end - newEnd;
            finalCount += (eleFromStart * eleFromEnd);
            start = newStart;
            end = newEnd;
        }
    }
    return finalCount;
}
int tripletSum(int *arr, int n, int num)
{
    // Write your code here
    if (n == 0)
        return 0;
    sort(arr, arr + n);

    int finalCount = 0;
    for (int i = 0; i < n; i += 1)
    {
        int pairSumFor = num - arr[i];
        finalCount += pairSum(arr, i + 1, n - 1, pairSumFor);
    }
    return finalCount;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        cin >> x;

        cout << tripletSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}
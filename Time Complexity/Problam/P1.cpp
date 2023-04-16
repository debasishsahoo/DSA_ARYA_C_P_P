#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m)
{
    sort(arr1, arr1 + n);....................n
    sort(arr2, arr2 + m);....................n
    int i = 0, j = 0;........................1
    while (i < n && j < m)...................nm
    {
        if (arr1[i] == arr2[j])..............n
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])..........n
        {
            i++;
        }
        else
        {
            j++;
            exit(0)
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size1, size2;

        cin >> size1;
        int *input1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> input1[i];
        }

        cin >> size2;
        int *input2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, size1, size2);

        delete[] input1;
        delete[] input2;

        cout << endl;
    }

    return 0;
}
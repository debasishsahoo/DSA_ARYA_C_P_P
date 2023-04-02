/* Program to demonstrate time taken by function fun() */
#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;

long int Calculation1(int n)
{
    return n * (n + 1) / 2;
}








long int Calculation2(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; 
    }
    return sum;
}










// O(1)+O(1OO)+O(1)







long int Calculation3(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{

    clock_t t;
    t = clock();

    cout << Calculation1(5000) << endl;

    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds

    printf("Calculation1() took %f seconds to execute \n", time_taken);

    t = clock();

    cout << Calculation2(5000) << endl;

    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds

    printf("Calculation2() took %f seconds to execute \n", time_taken);

    t = clock();

    cout << Calculation3(5000) << endl;

    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds

    printf("Calculation3() took %f seconds to execute \n", time_taken);

    return 0;
}

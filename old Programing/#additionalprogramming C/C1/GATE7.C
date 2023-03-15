/*

Data : 0 1 1 2 3 5 8 13 ....
Loc  : 0 1 2 3 4 5 6 7  ....

Write a recursive algorithm to find the nth element of the fibonacci series.

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int fib_no,n;
    int fibonacci(int);

    clrscr();

    printf("\n\n\t\tPlease give the location number....");
    scanf("%d",&n);

    fib_no=fibonacci(n);

    printf("\n\n\t\tSo the number at location %d of the fibonacci series is %d....",n,fib_no);

    getch();
  }

int fibonacci(int nn)
  {
    if (nn==0 || nn==1) return(nn);

    return(fibonacci(nn-1)+fibonacci(nn-2));
  }

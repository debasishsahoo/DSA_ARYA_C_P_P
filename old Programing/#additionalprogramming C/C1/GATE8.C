/*

Data : 0 1 1 2 3 5 8 13 ....
Loc  : 0 1 2 3 4 5 6 7  ....

Write a recursive algorithm to find the nth element of the fibonacci series.

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int place_no=0,fib_no=0,n;
    int fibonacci(int);

    clrscr();

    printf("\n\n\t\tPlease give the maximum limit of the number....");
    scanf("%d",&n);

    while(fib_no<=n)
      {
	fib_no=fibonacci(place_no);

	if (fib_no<=n) printf("\n\t\tLocation number = %d and term = %d....",
							     place_no,fib_no);
	place_no++;
      }

    getch();
  }

int fibonacci(int nn)
  {
    if (nn==0 || nn==1) return(nn);

    return(fibonacci(nn-1)+fibonacci(nn-2));
  }

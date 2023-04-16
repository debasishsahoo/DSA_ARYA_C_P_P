#include<stdio.h>
#include<conio.h>

void main()
  {
    int n,fact;
    int factorial_r(int);
    int factorial_nr(int);

    clrscr();

    printf("\n\n\t\tEnter the number of terms..");
    scanf("%d",&n);

    fact=factorial_r(n);

    printf("\n\n\t\tSo the non-recursive factorial of %d is %d....",n,fact);

    fact=factorial_nr(n);

    printf("\n\n\t\tSo the recursive factorial of %d is %d....",n,fact);

    getch();
  }

int factorial_nr(int nn)
  {
    int i,f=1;

    for(i=2;i<=nn;i++)
      f*=i;

    return(f);
  }

int factorial_r(int nn)
  {
    int i,f;

    if (nn==0 || nn==1) return(1);

    f=factorial_r(nn-1);

    return(nn*f);
  }
















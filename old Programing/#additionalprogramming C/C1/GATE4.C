/*
  Example of dangling pointer
*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int *a;
    int *abc(void);
    int *xyz(void);
    int i;

    clrscr();

    a=abc();

    printf("\n\n\t\tThe current value in *a = %d....",*a);

    a=xyz();

    printf("\n\t\tThe array contents are....");

    for(i=0;i<10;i++)
      printf("\n\t\t\t%3d",a[i]);

    getch();
  }

int * abc(void)
  {
    int *ptr;
    int k=100;

    //ptr=(int *)malloc(sizeof(int));
    ptr=&k;

    free(k);

    return(ptr);
  }

int * xyz(void)
  {
    static int aa[10]={1,2,3,4,5,6,7,8,9,10};
    int i;

    printf("\n\t\tThe array contents are....");

    for(i=0;i<10;i++)
      printf("%3d",aa[i]);

    return(aa);
  }





















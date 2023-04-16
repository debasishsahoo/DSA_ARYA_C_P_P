#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int a;

    clrscr();

    a=100;

    printf("\n\n\t\tThe current values are %d, %d, %d....",a,++a,++a);

    a=100;

    printf("\n\n\t\tThe current values are %d, %d, %d....",a,a++,++a);

    a=100;

    printf("\n\n\t\tThe current values are %d....",a);

    printf("\n\n\t\tThe current values are %d....",a++);

    printf("\n\n\t\tThe current values are %d....",++a);

    getch();
  }















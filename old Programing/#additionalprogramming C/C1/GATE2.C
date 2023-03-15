/*

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    void abc(void);

    clrscr();

    abc();
    abc();
    abc();

    getch();
  }

void abc(void)
  {
    static int a;

    a=100;

    printf("\n\n\t\tThe current value in a = %d....",a);

    a++;
  }














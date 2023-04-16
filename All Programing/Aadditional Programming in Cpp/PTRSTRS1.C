#include <stdio.h>
#include <conio.h>

struct person
  {
    int age;
    int sal;
  };

void main(void)
  {
    struct person p;

    clrscr();

    printf("\n\n\t\tPlease enter the age of the person....");
    scanf("%d",&p.age);

    printf("\t\tPlease enter the salary of the person....");
    scanf("%d",&p.sal);

    printf("\n\n\t\tSo the entered age of the person %d....",p.age);
    printf("\n\t\tSo the entered salary of the person %d....",p.sal);

    getch();
  }

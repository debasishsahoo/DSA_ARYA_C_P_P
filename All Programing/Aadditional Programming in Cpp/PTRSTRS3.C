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
    void input(struct person *);
    void display(struct person);

    clrscr();

    input(&p);
    display(p);

    getch();
  }

void input(struct person *pp)
  {
    printf("\n\n\t\tPlease enter the age of the person....");
    scanf("%d",&pp->age);

    printf("\t\tPlease enter the salary of the person....");
    scanf("%d",&pp->sal);
  }

void display(struct person ppp)
  {
    printf("\n\n\t\tSo the entered age of the person %d....",ppp.age);
    printf("\n\t\tSo the entered salary of the person %d....",ppp.sal);
  }
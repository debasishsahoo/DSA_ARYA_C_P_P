#include <stdio.h>
#include <conio.h>

struct date
  {
    int mm;
    int dd;
    int yy;
  };

struct person
  {
    int age;
    int sal;
    struct date doj;
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

    printf("\t\tPlease enter the month of joining of the person....");
    scanf("%d",&pp->doj.mm);

    printf("\t\tPlease enter the date of joining of the person....");
    scanf("%d",&pp->doj.dd);

    printf("\t\tPlease enter the year of joining of the person....");
    scanf("%d",&pp->doj.yy);
  }

void display(struct person ppp)
  {
    printf("\n\n\t\tSo the entered age of the person %d....",ppp.age);
    printf("\n\t\tSo the entered salary of the person %d....",ppp.sal);
    printf("\n\t\tSo the entered month of joining is %d....",ppp.doj.mm);
    printf("\n\t\tSo the entered date of joining is %d....",ppp.doj.dd);
    printf("\n\t\tSo the entered year of joining is %d....",ppp.doj.yy);
  }
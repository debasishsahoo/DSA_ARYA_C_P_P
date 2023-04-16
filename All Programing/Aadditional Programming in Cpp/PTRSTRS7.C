#include <stdio.h>
#include <conio.h>

typedef struct
  {
    int mm;
    int *dd;
    int yy;
  }date;

typedef struct
  {
    int age;
    int *sal;
    date *doj;
  }person;

void main(void)
  {
    person p;
    void input(person *);
    void display(person);

    clrscr();

    /* allocate memory for salary variable */
    if (((int *) p.sal = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for salary variable */
    if (((date *) p.doj = (date *) malloc(sizeof(date))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for date variable */
    if (((int *) p.doj->dd = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    input(&p);
    display(p);

    getch();
  }

void input(person *pp)
  {
    printf("\n\n\t\tPlease enter the age of the person....");
    scanf("%d",&pp->age);

    printf("\t\tPlease enter the salary of the person....");
    scanf("%d",pp->sal);

    printf("\t\tPlease enter the month of joining of the person....");
    scanf("%d",&pp->doj->mm);

    printf("\t\tPlease enter the date of joining of the person....");
    scanf("%d",pp->doj->dd);

    printf("\t\tPlease enter the year of joining of the person....");
    scanf("%d",&pp->doj->yy);
  }

void display(person ppp)
  {
    printf("\n\n\t\tSo the entered age of the person %d....",ppp.age);
    printf("\n\t\tSo the entered salary of the person %d....",*ppp.sal);
    printf("\n\t\tSo the entered month of joining is %d....",ppp.doj->mm);
    printf("\n\t\tSo the entered date of joining is %d....",*ppp.doj->dd);
    printf("\n\t\tSo the entered year of joining is %d....",ppp.doj->yy);
  }
#include <stdio.h>
#include <conio.h>

#define NULL 0

void main(void)
  {
    int stack[9],top,maxstack,choice;
    void stack_initialize(int *,int *,int *);
    void stack_push(int [],int *,int);
    void stack_pop(int [],int *);
    void stack_display(const int [],int,int);
    void stack_exit(void);
    int stack_menu(void);

    stack_initialize(&top,&choice,&maxstack);

    while(choice!=4)
      {
	choice=stack_menu();

	switch(choice)
	  {
	    case 1:		//PUSH operation....
	      stack_push(stack,&top,maxstack);
	      break;

	    case 2:		//POP operation....
	      stack_pop(stack,&top);
	      break;

	    case 3:		//DISPLAY operation....
	      stack_display(stack,top,maxstack);
	      break;

	    case 4:		//EXIT operation....
	      stack_exit();
	      break;
	  }

	getch();
      }
  }

void stack_initialize(int *tt,int *ch,int *maxstk)
  {
    *tt=NULL;
    *ch=0;
    *maxstk=8;
  }

void stack_push(int stk[],int *tt,int maxstk)
  {
    int item;

    if (*tt==maxstk)
      {
	printf("\n\n\t\tO V E R F L O W !!!!");
	printf("\n\n\t\tThere is no space for push operation....");
      }
    else
      {
	printf("\n\n\t\tPlease enter the item value for push operation....");
	scanf("%d",&item);

	++*tt;  //incremented content of the address
	//*tt++;  content of the incremented address

	//(*tt)++   ++(*tt)

	stk[*tt]=item;

	printf("\n\n\t\t%d has been pushed at location %d....",item,*tt);
      }

    printf("\n\n\t\tPUSH operation has been completed successfully....");
  }

void stack_pop(int stk[],int *tt)
  {
    int item;

    if (*tt==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W !!!!");
	printf("\n\n\t\tThere is no data for pop operation....");
      }
    else
      {
	item=stk[*tt];

	printf("\n\n\t\t%d has been popped from location %d....",item,*tt);

	--*tt;  //incremented content of the address
      }

    printf("\n\n\t\tPOP operation has been completed successfully....");
  }

void stack_display(const int stk[],int tt,int maxstk)
  {
    int i;

    if (tt==NULL)
      {
	printf("\n\n\t\tThere is no data for display operation....");
	printf("\n\n\t\tThe stack is empty....");
      }
    else
      {
	if (tt==maxstk)
	  printf("\n\n\t\tThe stack is completely pre-filled....");

	printf("\n\n\t\tDisplaying the current content of the stack....\n");

	for(i=1;i<=tt;i++)
	  {
	    printf("\n\t\tLocation number = %3d and content = %3d....",i,stk[i]);
	  }
      }

    printf("\n\n\t\tThe DISPLAY operation has been completed successfully....");
  }

int stack_menu(void)
  {
    int ch=0;

    while(ch<1 || ch>4)
      {
	clrscr();

	printf("\n\n\t\tM A I N  M E N U ....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~");

	printf("\n\n\t\t1 > P U S H  O P E R A T I O N ....");
	printf("\n\t\t2 > P O P  O P E R A T I O N ....");
	printf("\n\t\t3 > D I S P L A Y  O P E R A T I O N ....");
	printf("\n\t\t4 > E X I T  O P E R A T I O N ....");

	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }

    return(ch);
  }

void stack_exit(void)
  {
    printf("\n\n\t\tEnd of the program....");
    printf("\n\n\t\tHave a nice day and good bye....");
  }
































//Implementation of a queue data structure....

#include <stdio.h>
#include <conio.h>

#define NULL 0

void main(void)
  {
    int queue[9],front,rear,maxq,choice;
    void queue_initialize(int *,int *,int *,int *);
    int queue_menu(void);
    void queue_insert(int [],int *,int *,int);
    void queue_delete(int [],int *,int *,int);
    void queue_display(int [],int,int,int);
    void queue_exit(void);

    queue_initialize(&front,&rear,&maxq,&choice);

    while(choice!=4)
      {
	choice=queue_menu();

	switch(choice)
	  {
	    case 1: 		//INSERT option
	      queue_insert(queue,&front,&rear,maxq);
	      break;

	    case 2: 		//DELETE option
	      queue_delete(queue,&front,&rear,maxq);
	      break;

	    case 3: 		//DISPLAY option
	      queue_display(queue,front,rear,maxq);
	      break;

	    case 4: 		//EXIT option
	      queue_exit();
	      break;
	  }

	getch();
      }
  }

void queue_initialize(int *fr,int *re,int *mq,int *ch)
  {
    *fr=NULL;
    *re=NULL;
    *mq=8;
    *ch=0;
  }

/*
PROCEDURE QUEUE_DELETE(QUEUE,FRONT,REAR,MAXQ,ITEM)

1 . IF (FRONT=NULL) THEN PRINT "UNDERFLOW" AND EXIT

2 . ITEM=QUEUE[FRONT]

3 . IF FRONT=REAR THEN FRONT=NULL AND REAR=NULL
    ELSE IF FRONT=MAXQ THEN FRONT=1
    ELSE FRONT=FRONT+1

4 . EXIT
*/

void queue_delete(int q[],int *fr,int *re,int mq)
  {
    int item;

    if (*fr==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W !!!!");
	printf("\n\n\t\tNo data remains for the deletion operation....");
      }
    else
      {
	item=q[*fr];

	printf("\n\n\t\t%d has been deleted from location %d....",item,*fr);

	if (*fr==*re)
	  {
	    *fr=NULL;
	    *re=NULL;
	  }
	else if (*fr==mq) *fr=1;
	else ++*fr;
      }

    printf("\n\n\t\tDELETE opertion has been completed successfully....");
  }

/*
PROCEDURE QUEUE_INSERT(QUEUE,FRONT,REAR,MAXQ,ITEM)

1 . IF ((FRONT=1 AND REAR=MAXQ) OR (FRONT=REAR+1)) THEN
       PRINT "OVERFLOW" AND EXIT

2 . IF FRONT=NULL THEN FRONT=1 AND REAR=1
    ELSE IF REAR=MAXQ THEN REAR=1
    ELSE REAR=REAR+1

3 . QUEUE[REAR]=ITEM

4 . EXIT
*/

void queue_insert(int q[],int *fr,int *re,int mq)
  {
    int item;

    if ((*fr==1 && *re==mq) || (*fr==*re+1))
      {
	printf("\n\n\t\tO V E R F L O W !!!!");
	printf("\n\n\t\tNo space for the insertion operation....");
      }
    else
      {
	printf("\n\n\t\tPlease enter a new data item value....");
	scanf("%d",&item);

	if (*fr==NULL)
	  {
	    *fr=1;
	    *re=1;
	  }
	else if (*re==mq) *re=1;
	else ++*re;    //incremented content of the address
	     //*re++;      //content of the incremented address

	q[*re]=item;

	printf("\n\n\t\t%d has been inserted at location %d....",item,*re);
      }

    printf("\n\n\t\tINSERT operation has been completed successfully...");
  }

int queue_menu(void)
  {
    int ch=0;

    while(ch<1 || ch>4)
      {
	clrscr();

	printf("\n\n\t\tM A I N  M E N U ....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~");

	printf("\n\n\t\t1 > I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 > D E	L E T E  O P T I O N ....");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 > E X I T  O P T I O N ....");

	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }

    return(ch);
  }

void queue_exit(void)
  {
    printf("\n\n\t\tEnd of the program....");
    printf("\n\n\t\tHave a nice day....");
  }

/*
  1  2  3  4  5  6  7  8   fr   re
	.............       3    7   fr to re

  ....        ..........    5    2   fr to mq   1 to re
*/

void queue_display(int q[],int fr,int re,int mq)
  {
    int limit,i;

    if (fr==NULL)
      {
	printf("\n\n\t\tNo data in the queue....");
	printf("\n\n\t\tNothing to display....");
      }
    else
      {
	if (fr<=re) limit=re;
	else limit=mq;

	printf("\n\n\t\tDisplaying the current content of the queue....\n");

	for(i=fr;i<=limit;i++)
	  {
	    printf("\n\t\tLocation = %3d and content = %4d....",i,q[i]);
	  }

	if (fr>re)
	  for(i=1;i<=re;i++)
	    {
	      printf("\n\t\tLocation = %3d and content = %4d....",i,q[i]);
	    }
      }

    printf("\n\n\t\tDISPLAY operation has been completed successfully....");
  }

algorithm queue_delete(q[],*fr,*re,mq) returns item
  {
    if (*fr==NULL)
      {
	print "U N D E R F L O W"
      }
    else
      {
	item=q[*fr]

	if (*fr==*re)
	  {
	    *fr=NULL
	    *re=NULL
	  }
	else if (*fr==mq) *fr=1
	else ++*fr
      }

    return(item)
  }



label1: ....
	....

	goto label1







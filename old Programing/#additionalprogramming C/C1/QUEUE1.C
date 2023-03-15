#include <stdio.h>
#include <conio.h>

#define NULL 0

void main(void)
  {
    int queue[9],maxqueue,front,rear,choice;
    void queue_initialize(int *,int *,int *,int *);
    void queue_insert(int [],int,int *,int *);
    void queue_delete(int [],int,int *,int *);
    void queue_display(int [],int,int,int);
    int queue_menu(void);
    void queue_exit(void);

    queue_initialize(&maxqueue,&front,&rear,&choice);

    while(choice!=4)
      {
	choice=queue_menu();

	switch(choice)
	  {
	    case 1:		//queue insert option....
	      queue_insert(queue,maxqueue,&front,&rear);
	      break;

	    case 2:		//queue delete option....
	      queue_delete(queue,maxqueue,&front,&rear);
	      break;

	    case 3:		//queue display option....
	      queue_display(queue,maxqueue,front,rear);
	      break;

	    case 4:		//queue exit option....
	      queue_exit();
	      break;
	  }

	getch();
      }
  }

void queue_exit(void)
  {
    printf("\n\n\t\tHave a happy puja....");
    printf("\n\n\t\tEnd of the program....");
  }

void queue_initialize(int *maxq,int *fr,int *re,int *ch)
  {
    *maxq=8;
    *fr=0;
    *re=0;
    *ch=0;
  }

int queue_menu(void)
  {
    int ch=0;

    while(ch<1 || ch>4)
      {
	clrscr();

	printf("\n\n\t\tM A I N  M E N U ....");
	printf("\n\t\t---------------------");

	printf("\n\n\t\t1 > Q U E U E  I N S E R T ....");
	printf("\n\n\t\t2 > Q U E U E  D E L E T E ....");
	printf("\n\n\t\t3 > Q U E U E  D I S P L A Y ....");
	printf("\n\n\t\t4 > Q U E U E  E X I T ....");

	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }

    return(ch);
  }


/*
    QUEUE_DELETE(QUEUE,MAXQUEUE,FRONT,REAR,ITEM)
1 . IF (FRONT=NULL) THEN
      PRINT "UNDERFLOW" AND EXIT

2 . ITEM=QUEUE[FRONT]


3 . IF FRONT=REAR THEN
      FRONT=NULL AND REAR=NULL
    ELSE IF FRONT=MAXQUEUE THEN
      FRONT=1
    ELSE
      FRONT=FRONT+1

4 . EXIT
*/

void queue_delete(int q[],int maxq, int *fr,int *re)
  {
    int item;

    if (*fr==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W !!!!");
	printf("\n\n\t\tNo data for the deletion operation....");
      }
    else
      {
	item=q[*fr];

	printf("\n\n\t\t%d has been deleted from location %d....",item,*fr);

	if(*fr==*re)
	  {
	    *fr=NULL;
	    *re=NULL;
	    printf("\n\n\t\tNo data remains in the queue....");
	  }
	else if (*fr==maxq)
	  {
	    *fr=1;
	    printf("\n\n\t\tUsing the circular queue logic....");
	  }
	else
	  {
	    ++*fr;
	    printf("\n\n\t\tUsing the linear queue logic....");
	  }

	printf("\n\n\t\tDeletion operation has been completed successfully....");
      }

  }

/*
    QUEUE_INSERT(QUEUE,MAXQUEUE,FRONT,REAR,ITEM)
1 . IF (FRONT=REAR+1 OR (FRONT=1 AND REAR=MAXQUEUE) THEN
      PRINT "OVERFLOW" AND EXIT

2 . IF FRONT=0 THEN
      FRONT=1 AND REAR=1
    ELSE IF REAR=MAXQUEUE THEN
      REAR=1
    ELSE
      REAR=REAR+1

3 . QUEUE[REAR]=ITEM

4 . EXIT
*/

void queue_insert(int q[],int maxq, int *fr,int *re)
  {
    int item;

    if (*fr==*re+1 || (*fr==1 && *re==maxq))
      {
	printf("\n\n\t\tO V E R F L O W !!!!");
	printf("\n\n\t\tNo space for the future insertion....");
      }
    else
      {
	printf("\n\n\t\tPlease enter an item value....");
	scanf("%d",&item);

	if(*fr==NULL)
	  {
	    *fr=1;
	    *re=1;
	    printf("\n\n\t\tInserting in the queue for the first time....");
	  }
	else if (*re==maxq)
	  {
	    *re=1;
	    printf("\n\n\t\tUsing the circular queue logic....");
	  }
	else
	  {
	    //*re++;   //content of the incremented address
	    ++*re;   //incremented content of the address
	    //(*re)++; //valid
	    //++(*re); //valid

	    printf("\n\n\t\tUsing the linear queue logic....");
	  }

	q[*re]=item;

	printf("\n\n\t\t%d has been inserted at location %d....",item,*re);
	printf("\n\n\t\tInsertion operation has been completed successfully....");
      }
  }

//	  2 ..... 6 ...              fr = 2   re = 6       limit=re
//	  1 .. 3 ... 6 .. 8          fr = 6   re = 3       limit=maxq

void queue_display(int q[],int maxq,int fr,int re)
  {
    int i,limit;

    if (fr==NULL)
      {
	printf("\n\n\t\tThe QUEUE is empty....");
	printf("\n\n\t\tNothing to display....");
      }
    else
      {
	if (fr==re+1 || (fr==1 && re==maxq))
	  printf("\n\n\t\tThe queue has been completely filled up....");

	printf("\n\n\t\tDisplaying the current content of the queue....");

	if (fr<=re)
	  limit=re;
	else
	  limit=maxq;

	for(i=fr;i<=limit;i++)
	  printf("\n\t\tLocation no = %3d and content = %3d....",i,q[i]);

	if (fr>re)
	  for(i=1;i<=re;i++)
	    printf("\n\t\tLocation no = %3d and content = %3d....",i,q[i]);
      }

    printf("\n\n\t\tThe display option has been completed successfully....");
  }































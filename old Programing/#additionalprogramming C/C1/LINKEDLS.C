#include <stdio.h>
#include <conio.h>

#define NULL 0

typedef struct nodes
  {
    struct nodes *bnext;
    int info;
    struct nodes *fnext;
  }node;

node * getnode(void)
  {
    node *nn;

    /* allocate memory for a new node */
    if (((node *) nn = (node *) malloc(sizeof(node))) == NULL)
      {
	 printf("Not enough memory to allocate buffer\n");
	 exit(1);  /* terminate program if out of memory */
      }

    printf("\n\n\t\tMemory allocation has been done for a new node....");

    return(nn);
  }

void freenode(node *n)
  {
    printf("\n\n\t\tRealeasing the allocated space for the node....");

    free(n);
  }

void ll_initialize(node **,int *);
void ll_insert(node **);
void ll_delete(node **);
void ll_display(node *);
void ll_exit(void);
int ll_menu(void);

void main(void)
  {
    node *start;
    int choice;

    ll_initialize(&start,&choice);

    while(choice!=4)
      {
	choice=ll_menu();

	switch(choice)
	  {
	    case 1:		  		//INSERT option....
	      ll_insert(&start);
	      break;

	    case 2:		  		//DELETE option....
	      ll_delete(&start);
	      break;

	    case 3:		  		//DISPLAY option....
	      ll_display(start);
	      break;

	    case 4:		  		//EXIT option....
	      ll_exit();
	      break;
	  }

	getch();
      }
  }

void ll_initialize(node **st,int *ch)
  {
    *st=NULL;
    *ch=0;
  }

void ll_exit(void)
  {
    printf("\n\n\t\tGood bye and have a nice day....");
  }

int ll_menu(void)
  {
    int ch=0;

    while(ch<1 || ch>4)
      {
	clrscr();

	printf("\n\n\t\tM A I N  M E N U .... ");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~ ");

	printf("\n\n\t\t1 > I N S E R T  O P T I O N .... ");
	printf("\n\n\t\t2 > D E L E T E  O P T I O N .... ");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N .... ");
	printf("\n\n\t\t4 > E X I T  O P T I O N .... ");

	printf("\n\n\t\tPlease enter the option number....");
	scanf("%d",&ch);
      }

    return(ch);
  }

void ll_insert(node **st)
  {
    node *newnode,*ptr;
    int search_item,item;

    newnode=getnode();

    printf("\n\n\t\tPlease enter the new info value....");
    scanf("%d",&item);

    newnode->info=item;

    if (*st==NULL)
      {
	printf("\n\n\t\tThe linked list was not pre-existing....");
	printf("\n\n\t\tInserting the node as the first node....");

	newnode->next=NULL;
	*st=newnode;
      }
    else
      {
	printf("\n\n\t\tThe linked list was pre-existing....");

	printf("\n\n\t\tPlease enter the searching info value....");
	scanf("%d",&search_item);

	ptr=*st;

	while(ptr!=NULL && ptr->info!=search_item)
	  ptr=ptr->next;

	if (ptr==NULL)
	  {
	    printf("\n\n\t\tUnsuccessful searching....");
	    printf("\n\n\t\tInserting the node as the first node of the list....");

	    newnode->next=*st;
	    *st=newnode;
	  }
	else
	  {
	    printf("\n\n\t\tSuccessful searching....");
	    printf("\n\n\t\tInserting the node after %x with info %d....",
							     ptr,ptr->info);

	    newnode->next=ptr->next;
	    ptr->next=newnode;
	  }
      }

    printf("\n\n\t\tThe INSERT option has been completed successfully....");
  }

void ll_delete(node **st)
  {
    int search_item;
    node *prevptr,*ptr;

    if (*st==NULL)
      {
	printf("\n\n\t\tNo node in the main linked list....");
	printf("\n\n\t\tDeletion option can not be carried out....");
      }
    else
      {
	printf("\n\n\t\tPlease enter the search info value....");
	scanf("%d",&search_item);

	if ((*st)->info==search_item)
	  {
	    printf("\n\n\t\tThe %d has been found at the first node....",search_item);
	    printf("\n\n\t\tDeleting the first node of the linked list....");

	    ptr=*st;
	    *st=(*st)->next;
	    freenode(ptr);
	  }
	else
	  {
	    ptr=(*st)->next;
	    prevptr=*st;

	    while(ptr!=NULL && ptr->info!=search_item)
	      {
		prevptr=ptr;
		ptr=ptr->next;
	      }

	    if (ptr==NULL)
	      {
		printf("\n\n\t\tUnsuccessful searching....");
		printf("\n\n\t\tDeletion can not be carried out....");
	      }
	    else
	      {
		printf("\n\n\t\tSuccessful searching....");
		printf("\n\n\t\tAfter %d the item %d has been found....",
						   prevptr->info,ptr->info);

		prevptr->next=ptr->next;
		freenode(ptr);
	      }
	  }
      }

    printf("\n\n\t\tDELETE option has been completed successfully....");
  }

void ll_display(node *st)
  {
    node *ptr;

    if (st==NULL)
      {
	printf("\n\n\t\tLinked list has not been created....");
	printf("\n\n\t\tDisplay option can not be carried out....");
      }
    else
      {
	printf("\n\n\t\tDisplaying the current content of the linked list....\n");
	ptr=st;

	while(ptr!=NULL)
	  {
	    printf("\n\t\tNode = %4x, info = %4d and link = %4x....",
						    ptr,ptr->info,ptr->next);

	    ptr=ptr->next;
	  }
      }

    printf("\n\n\t\tDISPLAY option has been completed successfully....");
  }











































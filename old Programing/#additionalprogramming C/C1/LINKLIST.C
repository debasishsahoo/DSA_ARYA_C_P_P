#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//#define NULL 0

typedef struct nodes
  {
    int info;
    struct nodes *next;
  }node;

node *getnode(void)
  {
    node *new_node;

    printf("\n\n\t\tAllocating a memory space for a node....");

    /* allocate memory for the new node */
    if (((node *)new_node = (node *) malloc(sizeof(node))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    return(new_node);
  }

void freenode(node *del_node)
  {
    printf("\n\n\t\tReleasing the memory space allocated by a node....");

    free(del_node);
  }

void main(void)
  {
    int choice;
    node *start;
    int ll_menu(void);
    void ll_insert(node **);
    void ll_delete(node **);
    void ll_display(node *);
    void ll_exit(void);
    void ll_initialize(int *,node **);

    ll_initialize(&choice,&start);

    while(choice!=4)
      {
	choice=ll_menu();

	switch(choice)
	  {
	    case 1:			//INSERT option....
	      ll_insert(&start);
	      break;

	    case 2:			//DELETE option....
	      ll_delete(&start);
	      break;

	    case 3:			//DISPLAY option....
	      ll_display(start);
	      break;

	    case 4:			//EXIT option....
	      ll_exit();
	      break;
	  }

	getch();
      }
  }

void ll_insert(node **st)
  {
    node *ptr,*new_node;
    int new_item,search_item;

    printf("\n\n\t\tPlease enter the new info value....");
    scanf("%d",&new_item);

    new_node=getnode();
    new_node->info=new_item;

    if (*st==NULL)
      {
	printf("\n\n\t\tThe linked list is not pre-existing....");
	printf("\n\n\t\tCreating first node of the linked list....");

	new_node->next=NULL;
	*st=new_node;
      }
    else
      {
	printf("\n\n\t\tThe linked list is pre-existing....");

	printf("\n\n\t\tPlease enter the search item value....");
	scanf("%d",&search_item);

	if ((*st)->info==search_item)
	  {
	    printf("\n\n\t\t%d has been found as the first node....",search_item);

	    new_node->next=(*st)->next;
	    (*st)->next=new_node;

	    printf("\n\n\t\t%d has been inserted after node %d....",new_item,search_item);
	  }
	else
	  {
	    ptr=*st;

	    while(ptr!=NULL && ptr->info!=search_item)
	      {
		ptr=ptr->next;
	      }

	    if (ptr==NULL)
	      {
		printf("\n\n\t\tUnsuccessful searching....");
		printf("\n\n\t\tInsertion will be done as the first node....");

		new_node->next=*st;
		*st=new_node;
	      }
	    else
	      {
		printf("\n\n\t\tSuccessful searching....");

		new_node->next=ptr->next;
		ptr->next=new_node;

		printf("\n\n\t\t%d has been inserted after %d....",new_item,search_item);
	      }
	  }
      }

    printf("\n\n\t\tINSERT operation has been completed successfully....");
  }

void ll_initialize(int *ch,node **st)
  {
    *ch=0;
    *st=NULL;
  }

int ll_menu(void)
  {
    int ch=0;

    while(ch<1 || ch>4)
      {
	clrscr();

	printf("\n\n\t\tM A I N  M E N U ....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~");

	printf("\n\n\t\t1 > I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 > D E L E T E  O P T I O N ....");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 > E X I T  O P T I O N ....");

	printf("\n\n\t\tEnter the choice number....");
	scanf("%d",&ch);
      }

    return(ch);
  }

void ll_exit(void)
  {
    printf("\n\n\t\tEnd of the program....");
    printf("\n\n\t\tHave a nice day....");
  }

void ll_delete(node **st)
  {
    node *ptr,*prevptr,*new_node;
    int search_item;

    if (*st==NULL)
      {
	printf("\n\n\t\tThe linked list is not pre-existing....");
	printf("\n\n\t\tDeletion operation can not be carried out....");
      }
    else
      {
	printf("\n\n\t\tLnked listis pre-existing....");

	printf("\n\n\t\tPlease enter the new info value....");
	scanf("%d",&search_item);

	if ((*st)->info==search_item)
	  {
	    printf("\n\n\t\t%d has been found as the first node....",search_item);

	    ptr=*st;
	    *st=(*st)->next;
	    freenode(ptr);

	    if (*st==NULL)
	      {
		printf("\n\n\t\tNo node remains in the linked list....");
	      }
	    else
	      {
		printf("\n\n\t\t%d has become the first node....",(*st)->info);
	      }
	  }
	else
	  {
	    prevptr=*st;
	    ptr=(*st)->next;

	    while(ptr!=NULL && ptr->info!=search_item)
	      {
		prevptr=ptr;
		ptr=ptr->next;
	      }

	    if (ptr==NULL)
	      {
		printf("\n\n\t\tUnsuccessful searching....");
		printf("\n\n\t\tDeletion could not be done....");
	      }
	    else
	      {
		printf("\n\n\t\tSuccessful searching....");
		printf("\n\n\t\t%d has been found after %d....",ptr->info,prevptr->info);

		prevptr->next=ptr->next;
		freenode(ptr);
	      }
	  }
      }

    printf("\n\n\t\tDELETE operation has been completed successfully....");
  }

void ll_display(node *st)
  {
    node *ptr;

    if (st==NULL)
      {
	printf("\n\n\t\tLinked list does not exist....");
	printf("\n\n\t\tDisplay can not be carried out....");
      }
    else
      {
	ptr=st;

	printf("\n\n\t\tDisplaying the current content of the linked list....\n");

	while(ptr!=NULL)
	 {
	   printf("\n\t\tNode no. = %x, info = %4d and link = %x....",ptr,ptr->info,ptr->next);
	   ptr=ptr->next;
	 }
      }

    printf("\n\n\t\tDISPLAY operation has been completed successfully....");
  }








































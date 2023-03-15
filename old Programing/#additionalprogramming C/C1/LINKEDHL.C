#include <stdio.h>
#include <conio.h>

#define NULL 0

typedef struct nodes
  {
    int info;
    struct nodes *next;
  }node;

typedef struct
  {
    int max;
    int min;
    int count;
    node *next;
  }hnode;

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

hnode * gethnode(void)
  {
    hnode *nn;

    /* allocate memory for a new node */
    if (((hnode *) nn = (hnode *) malloc(sizeof(hnode))) == NULL)
      {
	 printf("Not enough memory to allocate buffer\n");
	 exit(1);  /* terminate program if out of memory */
      }

    printf("\n\n\t\tMemory allocation has been done for a new header node....");

    return(nn);
  }

void freenode(node *n)
  {
    printf("\n\n\t\tRealeasing the allocated space for the node....");

    free(n);
  }

void ll_insert(hnode **);
void ll_delete(hnode **);
void ll_display(hnode *);
void ll_exit(void);
void process_hnode(hnode **);

int ll_menu(void);

void main(void)
  {
    hnode *start;
    int choice;

    choice=0;

    start=gethnode();
    start->next=NULL;

    process_hnode(&start);

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

void ll_insert(hnode **st)
  {
    node *newnode,*ptr;
    int search_item,item;

    newnode=getnode();

    printf("\n\n\t\tPlease enter the new info value....");
    scanf("%d",&item);

    newnode->info=item;

    if ((*st)->next==NULL)
      {
	printf("\n\n\t\tThe linked list was not pre-existing....");
	printf("\n\n\t\tInserting the node as the first node....");

	newnode->next=NULL;
	(*st)->next=newnode;
      }
    else
      {
	printf("\n\n\t\tThe linked list was pre-existing....");

	printf("\n\n\t\tPlease enter the searching info value....");
	scanf("%d",&search_item);

	ptr=(*st)->next;

	while(ptr!=NULL && ptr->info!=search_item)
	  ptr=ptr->next;

	if (ptr==NULL)
	  {
	    printf("\n\n\t\tUnsuccessful searching....");
	    printf("\n\n\t\tInserting the node as the first node of the list....");

	    newnode->next=(*st)->next;
	    (*st)->next=newnode;
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

    process_hnode(st);

    printf("\n\n\t\tThe INSERT option has been completed successfully....");
  }

void ll_delete(hnode **st)
  {
    int search_item;
    node *prevptr,*ptr;

    if ((*st)->next==NULL)
      {
	printf("\n\n\t\tNo node in the main linked list....");
	printf("\n\n\t\tDeletion option can not be carried out....");
      }
    else
      {
	printf("\n\n\t\tPlease enter the search info value....");
	scanf("%d",&search_item);

	ptr=(*st)->next;

	if (ptr->info==search_item)
	  {
	    printf("\n\n\t\tThe %d has been found at the first node....",search_item);
	    printf("\n\n\t\tDeleting the first node of the linked list....");

	    (*st)->next=ptr->next;
	    freenode(ptr);
	  }
	else
	  {
	    prevptr=(*st)->next;
	    ptr=prevptr->next;

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

void ll_display(hnode *st)
  {
    node *ptr;

    printf("\n\n\t\tDisplying the information of header node....");
    printf("\n\n\t\tMaximum = %d, minimum = %d and count = %d.....",
						 st->max,st->min,st->count);

    if (st->next==NULL)
      {
	printf("\n\n\t\tInfo linked list has not been created....");
	printf("\n\n\t\tDisplay option can not be carried out....");

      }
    else
      {
	printf("\n\n\t\tDisplaying the current content of the linked list....\n");
	ptr=st->next;

	while(ptr!=NULL)
	  {
	    printf("\n\t\tNode = %4x, info = %4d and link = %4x....",
						    ptr,ptr->info,ptr->next);

	    ptr=ptr->next;
	  }
      }

    printf("\n\n\t\tDISPLAY option has been completed successfully....");
  }

void process_hnode(hnode **st)
  {
    node *ptr;

    if ((*st)->next==NULL)
      {
	(*st)->max=0;
	(*st)->min=0;
	(*st)->count=0;
      }
    else
      {
	ptr=(*st)->next;

	(*st)->max=ptr->info;
	(*st)->min=ptr->info;
	(*st)->count=1;

	while(ptr->next!=NULL)
	  {
	    ptr=ptr->next;

	    if ((*st)->max<ptr->info) (*st)->max=ptr->info;
	    if ((*st)->min>ptr->info) (*st)->min=ptr->info;
	    (*st)->count++;
	  }
      }
  }









































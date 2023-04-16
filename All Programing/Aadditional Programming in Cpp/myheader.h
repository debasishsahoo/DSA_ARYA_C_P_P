void my_halt(void)
  {
    printf("\n\n\t\tEnd of the program...");
  }

void my_cls(void)
  {
    printf("\n\n\t\tWelcome to the world of programming...");
  }

int my_input()
  {
    int data;

    printf("\n\n\t\tPlease enter a number...");
    scanf("%d",&data);

    return(data);
  }

void my_display(int d1,int d2,int re)
  {
    printf("\n\n\t\tDisplaying the result...");

    printf("\n\n\t\tSo the sum of %d and %d is %d...",d1,d2,re);
  }

int my_add(int x,int y)
  {
    int result;

    printf("\n\n\t\tPerforming the addition operation...");

    result=x+y;

    return(result);
  }


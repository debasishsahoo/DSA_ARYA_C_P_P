#include "stdio.h"
#include "myheader.h"

main()
  {
    int a,b,c;

    my_welcome();

    a=my_input();
    b=my_input();

    c=my_add(a,b);

    my_display(a,b,c);

    my_halt();
  }

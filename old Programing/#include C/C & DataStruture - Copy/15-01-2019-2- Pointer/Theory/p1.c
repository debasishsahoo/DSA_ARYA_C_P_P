#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %u\n", &c);
   printf("Value of c: %d\n\n", c);
   
   pc = &c;
   printf("Address of pointer pc: %u\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);
   
   c = 11;
   printf("Address of pointer pc: %u\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);
   
   *pc = 2;
   printf("Address of c: %u\n", &c);
   printf("Value of c: %d\n\n", c);
   return 0;
}

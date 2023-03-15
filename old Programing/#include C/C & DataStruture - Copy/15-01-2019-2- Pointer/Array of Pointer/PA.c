#include <stdio.h>
int main()
{
   int x[4];
   int i;

   for(i = 0; i < 4; ++i)
   {
      printf("&x[%d] = %u\n", i, &x[i]);
   }

   printf("Address of array x: %u", x);

   return 0;
}

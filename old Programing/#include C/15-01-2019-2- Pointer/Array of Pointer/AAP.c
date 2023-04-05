#include <stdio.h>
int main()
{
  int x[5] = {11, 22, 33, 44, 55};
  int* ptr;

  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);
  printf("*ptr+1 = %d \n", *ptr+1);
  printf("*ptr-1 = %d", *ptr-1);

  return 0;
}

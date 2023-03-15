// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
   float a[2][2], b[2][2], c[2][2];
   int i, j;

   // Taking input using nested for loop
   printf("Enter elements of 1st matrix\n");
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    {
       printf("Enter a%d%d: ", i+1, j+1);
       scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
   printf("Enter elements of 2nd matrix\n");
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    {
       printf("Enter b%d%d: ", i+1, j+1);
       scanf("%f", &b[i][j]);
    }

   // adding corresponding elements of two arrays
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    {
       c[i][j] = a[i][j] + b[i][j]; 
    }

   // Displaying the sum
   printf("\nSum Of Matrix:\n");

   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    {
       printf("%.1f\t", c[i][j]);  
       
       if(j==1)            
          printf("\n");
    }
return 0;
}

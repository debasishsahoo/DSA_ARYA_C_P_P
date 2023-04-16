// sum = 2! + 4! + 6! + 8! + ... n terms
// place 1    2    3    4    ... n places
// n! = (n-1)!*n

//  i  factor1 factor2
//--------------------
//  1   3       4
//  2   5       6    => factor1 = 2*i+1
//  3   7       8    => factor2 = 2*i+2 = 2*(i+1)
//  4   9      10

#include <stdio.h>
int main()
{
	int i,sum,fact,n;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	fact=2;
	
	for(i=1 ; i<=n ; i++) {
		
		sum=sum + fact;
	
		printf("\n\tCurrent i = %d, fact = %d and sum = %d...",i,fact,sum);
		
		fact=fact*(2*i+1)*(2*(i+1));
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


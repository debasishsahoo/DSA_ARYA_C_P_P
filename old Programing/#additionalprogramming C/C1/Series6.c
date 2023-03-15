// sum = 1! + 2! + 3! + 4! + 5! + 6! + ... n terms
// place 1    2    3    4    5    6    ... n places

// n! = (n-1)!*n

#include <stdio.h>

int main()
{
	int i,sum,fact,n,j;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	fact=1;
	
	for(i=1 ; i<=n ; i++) {
		
		sum=sum + fact;
	
		printf("\n\tCurrent i = %d, fact = %d and sum = %d...",i,fact,sum);
		
		fact=fact*(i+1);
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


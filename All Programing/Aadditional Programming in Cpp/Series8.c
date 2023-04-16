// sum = 1! + 3! + 5! + 7! + ... n terms
// place 1    2    3    4    ... n places
// n! = (n-1)!*n

//  i  factor1 factor2
//--------------------
//  1   2       3
//  2   4       5    => factor1 = 2*i
//  3   6       7    => factor2 = 2*i+1
//  4   8       9

#include <stdio.h>
int main()
{
	int i,sum,fact,n;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	fact=1;
	
	for(i=1 ; i<=n ; i++) {
		
		sum=sum + fact;
	
		printf("\n\tCurrent i = %d, fact = %d and sum = %d...",i,fact,sum);
		
		fact=fact*(2*i)*(2*i+1);
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


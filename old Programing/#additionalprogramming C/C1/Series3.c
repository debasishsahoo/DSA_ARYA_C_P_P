// sum = 1 + 3 + 5 + 7 + ... n terms
// place 1   2   3   4   ... n places

#include <stdio.h>

int main()
{
	int i,sum,n;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1;i<=2*n-1;i+=2) {
		sum=sum+i;
		printf("\n\tCurrent i = %d, term = %d and sum = %d...",i,i,sum);
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


// sum = 1 + 2 + 3 + 4 + ... n terms
// place 1   2   3   4   ...

#include <stdio.h>

int main()
{
	int i,sum,n;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1;i<=n;i++) {
		sum=sum+i;
		printf("\n\tCurrent i = %d and sum = %d...",i,sum);
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


// sum = 1 - 2 + 3 - 4 + 5 - 6 - ... n terms
// place 1   2   3   4   5   6   ... n places

#include <stdio.h>
#include <math.h>

int main()
{
	int i,sum,n;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1 ; i<=n ; i++) {
		sum=sum + pow(-1,i+1)*i;
		printf("\n\tCurrent i = %d, term = %d and sum = %d...",i,(int)pow(-1,i+1)*i,sum);
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


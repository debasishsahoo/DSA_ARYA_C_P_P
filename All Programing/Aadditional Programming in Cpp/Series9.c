// sum = 4 + 7 + 4 + 7 + 4 + 7 ... n terms
// place 1   2   3   4   5   6 ... n places

#include <stdio.h>

int main()
{
	int i,sum,n,term;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	sum=0;
	term=4;
	
	for(i=1;i<=n;i++) {
		
		sum=sum+term;
		
		printf("\n\tCurrent i = %d, term = %d and sum = %d...",i,term,sum);
		
//		if (term==4)
//			term=7;
//		else
//			term=4;

		term=11-term;
	}
	
	printf("\n\n\tSo the final sum is %d...",sum);
}


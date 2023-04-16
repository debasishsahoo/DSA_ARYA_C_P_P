// sum = 1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + 9 ... n terms
// place 1   2   3   4   5    6   7   8   9   10  11 ...   n places

#include <stdio.h>

int main()
{
	int i,tsum,fsum,n,term;
	
	printf("\tPlease enter the number of terms...");
	scanf("%d",&n);
	
	tsum=0;
	fsum=0;
	term=1;
	
	for(i=1;i<=n;i++) {
		
		if (i%5==0) {
			fsum=fsum+tsum;
			printf("\n\tAdding tsum = %d...\n",tsum);
			tsum=0;
		} else {
			tsum=tsum+term;
			fsum=fsum+term;
			printf("\n\tAdding term = %d...",term);
			term++;	
		}
	}
	
	printf("\n\n\tSo the final sum is %d...",fsum);
}


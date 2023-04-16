/*
n = 9 (odd layer number)
m = (n+1)/2 = 5
					i	b	*
				-----------------
....*				1   4  	1
...***				2	3	3		b => m-i
..*****				3	2	5		* => 2*i-1
.*******			4	1	7
*********		____5___0___9____
.*******			6	1	7
..*****				7	2	5		b => i-m
...***				8	3	3		* => 2*(n-i)+1
....*				9	4	1
				-----------------
*/
#include <stdio.h>
int main()
{
	int i,n,m,j,b,s;
	
	printf("Please enter the odd number of layers...");
	scanf("%d",&n);
	
	m=(n+1)/2;
	
	printf("\nPrinting the pattern...\n\n");
	
	for(i=1;i<=n;i++) {
		if (i<=m) {
			b=m-i;
			s=2*i-1;
		} else {
			b=i-m;
			s=2*(n-i)+1;
		}
		for(j=1;j<=b;j++)
			printf(".");
					
		for(j=1;j<=s;j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












/*
n = 9 (odd layer number)
m = (n+1)/2 = 5
					i	b	*
				-----------------
*********			1   0  	9
.*******			2	1	7		b => i-1
..*****				3	2	5		* => 2*(m-i)+1
...***  			4	3	3
....*    		____5___4___1____
...***  			6	3	3
..*****				7	2	5		b => n-i
.*******			8	1	7		* => 2*(i-m)+1
*********			9	0	9
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
			b=i-1;
			s=2*(m-i)+1;
		} else {
			b=n-i;
			s=2*(i-m)+1;
		}
		for(j=1;j<=b;j++)
			printf(".");
					
		for(j=1;j<=s;j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












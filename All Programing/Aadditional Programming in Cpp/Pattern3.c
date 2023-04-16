/*

n = 5				i	b	*
				-----------------
....*				1   4 	1
...***				2	3	3		b => (n-i)
..*****				3	2	5		* => 2*i-1
.*******			4	1	7
*********			5	0	9
				-----------------
*/
#include <stdio.h>

int main()
{
	int i,n,j;
	
	printf("Please enter the number of layers...");
	scanf("%d",&n);
	
	printf("\nPrinting the pattern...\n\n");
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=(n-i);j++)
			printf(".");

		for(j=1;j<=(2*i-1);j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












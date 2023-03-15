/*

n = 5				i	b	*
				-----------------
*********			1   0 	9
.*******			2	1	7		b => (i-1)
..*****				3	2	5		* => 2*(n-i)+1
...***				4	3	3
....*				5	4	1
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
		for(j=1;j<=(i-1);j++)
			printf(".");

		for(j=1;j<=(2*(n-i)+1);j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












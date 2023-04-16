/*

n = 5			i		*
			-----------------
*				1     	1
**				2		2		
***				3		3		* => i
****			4		4
*****			5		5
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
		for(j=1;j<=i;j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












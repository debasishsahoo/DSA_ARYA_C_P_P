/*
n = 9 (odd layer number)
m = (n+1)/2 = 5
				i		*
			-----------------
*				1     	1
**				2		2		
***				3		3		* => i
****			4		4
*****		____5_______5____
****			6		4
***				7		3		* => (n-i+1)
**				8		2
*				9		1
			-----------------
*/
#include <stdio.h>
int main()
{
	int i,n,m,j,s;
	
	printf("Please enter the odd number of layers...");
	scanf("%d",&n);
	
	m=(n+1)/2;
	
	printf("\nPrinting the pattern...\n\n");
	
	for(i=1;i<=n;i++) {
		if (i<=m)
			s=i;
		else
		    s=n-i+1;
			
		for(j=1;j<=s;j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












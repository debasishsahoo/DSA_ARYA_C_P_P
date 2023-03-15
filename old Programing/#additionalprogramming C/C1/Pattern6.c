/*

n = 5				i	b	Char
				-----------------
....a				1   4 	1 -> a(97)
...bbb				2	3	3 -> b(98)		b => (n-i)
..ccccc				3	2	5 -> c(99)		char => 2*i-1
.ddddddd			4	1	7 -> d(100)     Char => i+96
eeeeeeeee			5	0	9 -> e(101)
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
			printf("%c",i+96);
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}












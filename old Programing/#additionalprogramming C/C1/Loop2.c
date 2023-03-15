#include <stdio.h>

int main(void) {
	int i, count;
	
	printf("\n\nIteration using for loop...\n");					//loop using for
	
	count=0;
	
	for(i=1;i<=10;i+=4) {
		printf("\nIteration using for with i = %d...",i);
		count++;
	}
	
	printf("\n\nAfter exiting loop i = %d and count = %d...",i,count);

	printf("\n\nEnd of the program...");	
}

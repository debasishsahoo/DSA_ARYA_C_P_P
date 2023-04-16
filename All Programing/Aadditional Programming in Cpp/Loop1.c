#include <stdio.h>

int main(void) {
	int i, count;
	
	printf("\n\nIteration using for loop...");					//loop using for
	i=1;
	for(;i<=5;) {
		printf("\nIteration using for with i = %d...",i);
		i++;
	}
	printf("\nAfter exiting loop i = %d...",i);

	printf("\n\nIteration using for do-while...");				//loop using do-while
	i=10;
	do {
		printf("\nIteration using do-while with i = %d...",i);
		i++;
	} while(i<=5);
	printf("\nAfter exiting loop i = %d...",i);

	printf("\n\nIteration using while-do...");					//loop using while-do
	i=10;
	while(i<=5) {
		printf("\nIteration using while-do with i = %d...",i);
		i++;
	}
	printf("\nAfter exiting loop i = %d...",i);

	printf("\n\nEnd of the program...");	
}

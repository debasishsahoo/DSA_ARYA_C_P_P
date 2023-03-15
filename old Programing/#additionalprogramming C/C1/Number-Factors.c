//Find out all possible factors of a given number...

#include <stdio.h>
#include <math.h>

int main() {
	int n,i;
	
	printf("\n\nEnter an integer number...");
	scanf("%d",&n);
	
//	printf("\n\nCalculating factors...");
//	
//	for(i=1;i<=n;i++) {
//		
//		if (n%i==0) 
//			printf ("\n%d is a factor...",i);
//	}

	printf("\n\nCalculating factors...");
	
	for(i=1;i<sqrt(n);i++) {
		
		if (n%i==0) 
			printf ("\n%d and %d are factors...",i,n/i);
	}
	
	if (sqrt(n)==(int)sqrt(n))
			printf("\n%d is a factor...",(int)sqrt(n));				
	
	printf("\n\nEnd of the program...");
}

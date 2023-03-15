// Find out all possible Perfect Numbers ranging from 2 to 1000...
// Perfect number is that number whose sum of all factors of that number (excluding the number itself) is equal to the number itself.
// Example 28 is a perfect number as 28 = 1 + 2 + 4 + 7 + 14

#include <stdio.h>
#include <math.h>

int main() {
	int n,i,sum;
	
	for(n=2;n<=1000;n++) {
		
		sum=1;
		
		for(i=2;i<sqrt(n);i++ ) {
			
			if (n%i==0) 
				sum=sum+i+n/i;
		}
		
		if (sqrt(n)==(int)sqrt(n))
			sum=sum+(int)sqrt(n);
			
		if (n==sum)
			printf("\n%d is a perfect number...",n);
	}
					
	printf("\n\nEnd of the program...");
}

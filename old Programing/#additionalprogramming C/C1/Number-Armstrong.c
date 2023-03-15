// An Armstrong number is that number whose sum of all digits of that number each to the power of number 
// of digits of that number is equal to the number itself.

// Find out all armstrong numbers ranging between 1 to 1000.
// Example: 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.

#include <stdio.h>
#include <math.h>

int main() {
	int n,d,sum,i,nd;
	
	for(n=1;n<=1000;n++) {
		
		nd=(int)log10(n)+1;				// log10(1000) => 3, log10(10000) => 4
		
		sum=0;
		
		for(i=1;i<=nd;i++) {
			d= (int)(n / pow(10,i-1)) % 10;
			sum=sum+(int)pow(d,nd);
		}

		if (n==sum)
			printf("\n%4d is an Armstrong number...",n);
	}
	
	printf("\n\nEnd of the program...");
}

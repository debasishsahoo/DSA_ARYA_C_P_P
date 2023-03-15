//Find out the sum of all digits of a given number...

#include <stdio.h>

int main() {
	int n,d,sum;
	
	printf("\nPlease enter an integer...");
	scanf("%d",&n);
	
	sum=0;
	
	while (n!=0) {
		d=n % 10;
		sum=sum+d;
		n=n/10;
		printf("\n\nCurrent values in d = %d, reduced n = %d and sum = %d...",d,n,sum);
	}
	
	printf("\n\nSo the sum of all digits is %d...",sum);
	
	printf("\n\nEnd of the program...");
}

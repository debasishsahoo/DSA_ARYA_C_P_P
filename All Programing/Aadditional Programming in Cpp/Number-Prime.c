// Find out whether a given number is prime or not...

#include <stdio.h>
#include <math.h>

int main() {
	int n,i,flag;
	
	printf("\nPlease enter an integer...");
	scanf("%d",&n);
	
	flag=1;
	
	for(i=2;i<=(int)sqrt(n) && flag==1;i++) {
		if (n%i==0) flag=0;
	}
	
	if (flag==1)
		printf("\n%d is a prime number...",n);
	else
		printf("\n%d is not a prime number...",n);
	
	printf("\n\nEnd of the program...");
}

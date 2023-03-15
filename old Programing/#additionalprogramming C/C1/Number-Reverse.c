//Find out the reverse of a given number...

#include <stdio.h>

int main() {
	int n,d,revnum;
	
	printf("\nPlease enter an integer...");
	scanf("%d",&n);
	
	revnum=0;
	
	while (n!=0) {
		d=n%10;
		revnum=revnum*10+d;
		printf("\nCurrent reverse number = %d and digit = %d...",revnum,d);
		n=n/10;
	}
			
	printf("\n\nSo the digital root of the given number is %d...",revnum);
	
	printf("\n\nEnd of the program...");
}

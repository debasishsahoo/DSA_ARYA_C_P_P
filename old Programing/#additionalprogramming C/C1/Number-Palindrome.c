//Find out all possible three digit Palindrome numbers...

#include <stdio.h>

int main() {
	int n,d,num,revnum;
	for(n=100;n<=999;n++) {
		
		revnum=0;
		num=n;
		
		while (num!=0) {
			d=num%10;
			revnum=revnum*10+d;
			//printf("\nCurrent reverse number = %d and digit = %d...",revnum,d);
			num=num/10;
		}
			
		if (revnum==n)
		 	printf("\nSo %d is a Palindrome number...",n);
	}
	
	printf("\n\nEnd of the program...");
}

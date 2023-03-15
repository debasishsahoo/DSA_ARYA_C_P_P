//Find out the digital root of a given number...
/*
  n = 1231 => 1+2+3+1 = 7
  n = 1234 => 1+2+3+4 = 10 => 1+0 = 1
  n = 1918 => 1+9+1+8 = 19 => 1+9 = 10 => 1+0 = 1
*/

#include <stdio.h>

int main() {
	int n,d,sum;
	
	printf("\nPlease enter an integer...");
	scanf("%d",&n);
	
	while (n!=0) {

			sum=0;
			
			while (n!=0) {
				d=n%10;
				sum=sum+d;
				n=n/10;
			}
			
			if (sum>9) {
				n=sum;
				sum=0;
				//printf("\nGoing again...");
			}
	}
	
	printf("\n\nSo the digital root of the given number is %d...",sum);
	
	printf("\n\nEnd of the program...");
}

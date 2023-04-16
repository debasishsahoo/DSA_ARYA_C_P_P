//Find out the sum of all digits of a given number...

/*
n = 7689
i  digit
------------------------------------
1  (int)(7689 / (10^(i-1)) % 10 => 9 
2  (int)(7689 / (10^(i-1)) % 10 => 8
3  (int)(7689 / (10^(i-1)) % 10 => 6
4  (int)(7689 / (10^(i-1)) % 10 => 7
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n,d,sum,i,nd;
	
	printf("\nPlease enter an integer...");
	scanf("%d",&n);
	
	nd=0;
	
//	while(pow(10,nd)<=n) nd++;
//	printf("\nSo the number of digits in the given number is %d...\n",nd);
	
	nd=(int)log10(n)+1;
	printf("\nSo the number of digits in the given number is %d...\n",nd);
	
	sum=0;
	
	for(i=1;i<=nd;i++) {
		d= (int)(n / pow(10,i-1)) % 10;
		sum=sum+d;
		printf("\nThe current values of d = %d and sum = %d...",d,sum);
	}
	
	printf("\n\nSo the sum of all digits is of the number %d is %d...",n,sum);
	
	printf("\n\nEnd of the program...");
}

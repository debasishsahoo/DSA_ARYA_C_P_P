 // Find out all Krishnamurthy Numbers from 1 to 1000
 // Krishnamurthy Number: It is a number which is equal to the sum of the factorials of all its digits.
 // Example : 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

#include <stdio.h>

int main() {
	int n,d,sum,num,fact,i;
	
	for(n=1;n<=1000;n++) {
		sum=0;
		num=n;	
	   
	    while (num!=0) {
		  	
			d=num%10;
		  	fact=d;
		  	
		  	for(i=2;i<=(d-1);i++)
		  		fact=fact*i;
		
		  	sum=sum+fact;
		  	num=num/10;
		}
		
		if (n==sum)
		  	printf("\n%d is a Krishnamurthy number...",n);
	}
		
	printf("\n\nEnd of the program...");
}

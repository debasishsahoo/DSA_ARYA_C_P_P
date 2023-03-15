//Find out first n fibonacci numbers where the first two numbers of the series are 0 and 1...
//Fibonacci numbers are: 0  1  1  2  3  5  8  13 ... n terms

#include <stdio.h>

int main() {
	int n,f1,f2,f3,i;
	
	printf("\nPlease enter number of terms of the fibonacci series...");
	scanf("%d",&n);
	
	f1=0;
	f2=1;
	
	if (n>=1)
	  	printf("\n%d",f1);
	
	if (n>=2)
	  	printf("\n%d",f2);
	
	for(i=3;i<=n;i++) {
		f3=f1+f2;
		
		printf("\n%d",f3);
		
		f1=f2;
		f2=f3;
	}
	
	printf("\n\nEnd of the program...");
}

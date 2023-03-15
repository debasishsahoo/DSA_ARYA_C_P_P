// Find out all possible 3-digit Triode numbers...
// Let x be a 3-digit triode number, Then x, 2*x and 3*x will all have distinct digits...

// Example: x = 219, 2*x = 438 and 3*x = 657

/*

x   => 3 digits
2*x => 3 digits			or 		4 digits 		  x	=> 102 to 498
3*x => 3 or 4 digits	or		4 digits

*/

#include <stdio.h>

int main() {
	int a[10],num,x,flag,i,d;
	
	for (x=102;x<=498;x++) {
		
		for(i=0;i<10;i++)
			a[i]=0;
			
		flag=1;
		
		for(i=1;i<=3 && flag==1;i++) {
			num=i*x;
			
			while(num!=0 && flag==1) {
				d=num%10;
				
				if (a[d]==0)
					a[d]=1;
				else
					flag=0;
				
				num=num/10;
			}
		}
		
		if (flag==1)
				printf("\nTriode number x = %d, 2*x = %d and 3*x = %d...",x,2*x,3*x);
	}
	
	printf("\n\nEnd of the program...");
}

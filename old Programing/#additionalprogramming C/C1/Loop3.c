#include <stdio.h>

int main(void) {
	int d,m,count;
	
	printf("\n\nWent to Doctor for check up...");					
	
	count=0;
	
	for(d=1;d<=5;d++) {
		printf("\n\nGood day...");
		
		for(m=1;m<=d;m++) {
			printf("\nDay no. = %d and medicine no. = %d...",d,m);
			count++;
		}
		
		printf("\nGood night...");
	}
	
	printf("\n\nWent to Doctor to report him...");
	
	printf("\nAfter exiting loop d = %d and m = %d...",d,m);
	printf("\nMedicine count = %d...",count);

	printf("\n\nEnd of the program...");	
}

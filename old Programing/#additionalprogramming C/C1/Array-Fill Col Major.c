// Fill up one 4 x 4 2D-array with the following set of data...

/*
				col
			0  	1  	2	3										col number		Fill-up logic
	-------------------------									-----------------------------
		|															0			1+row
	0	|	1  	5	9	13											1			5+row	=> => (col*4+1)+row	
		|															2			9+row
r	1	|	2	6	10	14											3			13+row
o		|								
w	2	|	3	7 	11	15	
		|
	3	|	4 	8 	12	16	
		|
	-------------------------  
*/

#include <stdio.h>

int main() {
	int a[4][4],row,col;
	
	printf("\n\nFilling up the array contents...");
	
	for(row=0;row<4;row++) {
		for(col=0;col<4;col++)
			{
				a[row][col]=(col*4+1)+row;
			}
	}

	printf("\n\nDisplaying the array contents...\n\n");
	
	for(row=0;row<4;row++) {
		for(col=0;col<4;col++)
			{
				printf("%4d",a[row][col]);
			}
				
		printf("\n\n");
	}
		
	printf("\n\nEnd of the program...");
}

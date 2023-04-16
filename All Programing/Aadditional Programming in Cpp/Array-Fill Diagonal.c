// Fill up one 4 x 4 2D-array with the following set of data...

/*
				col
			0  	1  	2	3	4				10 will be placed at						20 will be placed at		
	-------------------------------			-------------------- 						--------------------			
		|										row		col									row		col
	0	|	10 	0	0	0	20					0		0									0		4
		|										1		1		Logic is row==col			1		3		Logic is col=(4-row)
r	1	|	0	10	0	20	0					2		2									2		2
o		|										3		3									3		1
w	2	|	0	0 	30	0	0					4		4									4		0
		|									
	3	|	0 	20	0	10	0				
		|										
	4	|	20	0	0	0	10					
		|										
	-------------------------------  
*/

#include <stdio.h>
int a[5][5];
int main() {
	int row,col;
	
	printf("\n\nFilling up the array contents...");
	
	for(row=0;row<5;row++) {
		for(col=0;col<5;col++)
			{
				if (row==col) 
					a[row][col]+=10;
	
				if (col==4-row) 
					a[row][col]+=20;
			}
	}

	printf("\n\nDisplaying the array contents...\n\n");
	
	for(row=0;row<5;row++) {
		for(col=0;col<5;col++)
			{
				printf("%4d",a[row][col]);
			}
				
		printf("\n\n");
	}
		
	printf("\n\nEnd of the program...");
}

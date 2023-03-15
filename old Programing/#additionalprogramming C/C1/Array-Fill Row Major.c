// Fill up one 4 x 4 2D-array with the following set of data...

/*
				col
			0  	1  	2	3
	-------------------------
		|	
	0	|	1  	2	3	4	=>	1+col	
		|
r	1	|	5	6	7	8	=>	5+col
o		|								=> (row*4+1)+col
w	2	|	9	10	11	12	=> 	9+col
		|
	3	|	13	14	15	16	=> 	13+col
		|
	-------------------------  
*/

#include <stdio.h>

int a[4][4];

int main() {
	int row,col;
	
	printf("\n\nDisplaying the array contents...\n\n");
	
	for(row=0;row<4;row++) {
		for(col=0;col<4;col++)
			{
				printf("%4d",a[row][col]);
			}
				
		printf("\n\n");
	}
	
	printf("\n\nFilling up the array contents...");
	
	for(row=0;row<4;row++) {
		for(col=0;col<4;col++)
			{
				a[row][col]=(row*4+1)+col;
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

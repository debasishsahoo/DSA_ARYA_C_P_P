// Fill up one 4 x 4 2D-array with the following set of data...

/*
				col
			0  	1  	2	3									
	-------------------------								
		|						
	0	|	0  	1	2	3									
		|									
r	1	|	1	1	2	3							
o		|								
w	2	|	2	2 	2	3	
		|
	3	|	3 	3 	3	3	
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
//				if (row>col)
//				 	a[row][col]=row;
//				else
//					a[row][col]=col;

				a[row][col]=(row>col?row:col);
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

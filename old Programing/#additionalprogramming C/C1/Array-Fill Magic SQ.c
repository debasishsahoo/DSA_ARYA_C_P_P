/*
Question :: Construct a magic square having dimension nxn (where n is odd). The value of n will be supplied by the user.

Magic square is a square matrix which will be filled up with numbers 1 to n*n each will be used once and its rowwise sums, columnwise sums
and diagonalwise sums are equal to each other. And the sum thus obtained is known as magic sum.

Also find out the expression for the magic sum directly from the dimension value n.
																												 *    *    *    *
	       		col (c)																							**   **   **   *
       		1  	2  	3  	4  	5     			r=1   c=(n+1)/2  (initial values)								   * *  * *  * *  *
   	---------------------------   			r => denotes row number  c => denotes column number				  *  * *  * *  * *
 r 	1 	|	17 	24  1  	8 	15																				 *   **   **   **
 o 	2 	|	23  5  	7 	14 	16     			r--   c++   normal fill-up logic								*    *    *    *
 w 	3 	| 	4  	6 	13 	20 	22																			
(r)	4 	|	10 	12 	19 	21  3     			in following conditions, fill-up will turn its head				value of n		magic sum
   	5 	|	11 	18 	25  2  	9     			case A : (limit check)											-------------------------
   	---------------------------					(2)/(3) (row folding) if (r<1) then r=n							3				15
			   									(3)/(2) (col folding) if (c>n) then c=1							5				65
   	magic sum = 65		   						(1)    (corner logic) if (r<1 && c>n) then r=r+2, c=c-1			7				175
   	here n = 5 (odd number)					case B : (preoccupied check)                                    	n       		n*(n*n+1)/2
												(4) if (a[r][c]!=0) then  r=r+2 c=c-1						-------------------------	
*/

#include <stdio.h>

int a[10][10];

int main() {
	int i,r,c,n,s=0;

    printf("\n\n\t\tPlease enter the odd dimension of the matrix....");
    scanf("%d",&n);

    printf("\n\n\t\tThe precalculated magic sum is %d....\n",n*(n*n+1)/2);

    r=1;  c=(n+1)/2;

    for(i=1;i<=n*n;i++) {
		a[r][c]=i;
		r--;
		c++;

		if (r<1 && c>n) {r=r+2;  c--;}
		else if (r<1) r=n;
		else if (c>n) c=1;
		else if (a[r][c]!=0) {r=r+2;  c--;}
    }

    for(r=1;r<=n;r++) {
		printf("\n\t\t");
		
		for(c=1;c<=n;c++) {
	    	printf("%4d",a[r][c]);

	    if (r==c) s=s+a[r][c];
	  	}
    }

    printf("\n\n\t\tThe obtained magic sum is %d....",s);
}








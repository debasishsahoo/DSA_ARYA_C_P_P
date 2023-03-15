/*
		     									rr => incr/decr factor along the row    	row=row+rr
		     									cc => incr/decr factor along the column 	col=col+cc
		     									
     	1  2  3  4			       			rr  cc
 --------------------                    ----------
  	1 | 1  2  3  4                         	0   1
   	  |                                    	1   0      	tt=rr    tt=cc
  	2 | 12 13 14 5                         	0  -1       rr=cc    cc=-rr
   	  |                                    -1   0      	cc=-tt   rr=tt
  	3 | 11 16 15 6                        ----------
   	  |                                    	0   1
  	4 | 10 9  8  7					n = 4
 --------------------

 											if (r>n || c>n || c<1 || a[r][c]!=0)

*/

#include <stdio.h>

int a[20][20];

int main() {	
    int row,col,rr,cc,tt,tr,tc,n,i;

    printf("\n\n\t\tPlease enter the dimension of the square matrix....");
    scanf("%d",&n);

    row=1;
    col=1;
    rr=0;
    cc=1;

    for(i=1;i<=n*n;i++) {
		a[row][col]=i;

		tr=row+rr;
		tc=col+cc;

		if (tc>n || tr>n || tc<1 || tr<1 || a[tr][tc]!=0)
	  		{
	    		tt=cc;
	    		cc=-rr;
	    		rr=tt;
	  		}

		row=row+rr;
		col=col+cc;
    }

    printf("\n\n\t\tSo the content of the spiral matrix is....\n\n\t\t");

    for(row=1;row<=n;row++) {
		for(col=1;col<=n;col++)
	  		printf("%4d",a[row][col]);

		printf("\n\n\t\t");
    }
}




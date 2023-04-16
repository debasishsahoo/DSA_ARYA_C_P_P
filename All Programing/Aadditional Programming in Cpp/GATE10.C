/*

int x = 65 = 64 + 1       = 0000 0000 0100 0001 (A)
			 or 0000 0000 0010 0000 => 0020 H
			    -------------------
int x = 97 = 64 + 32 + 1  = 0000 0000 0110 0001 (a)


int x = 97 = 64 + 32 + 1  = 0000 0000 0110 0001 (a)
			and 1111 1111 1101 1111 => ffdf H
			    -------------------
int x = 65 = 64 + 1       = 0000 0000 0100 0001 (A)


	  _
a xor 1 = a

a xor 0 = a


int x = 97 = 64 + 32 + 1  = 0000 0000 0110 0001 (a)
			xor 0000 0000 0010 0000 => 0020 H
			    -------------------
int x = 65 = 64 + 1       = 0000 0000 0100 0001 (A)


n = 100 = 64 + 32 + 4  = 0000 0000 0110 0100

n >> 3 => 0000 0000 0000 1100 => 12

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int n;

    clrscr();

    n=97;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);
    n=n & 0xffdf;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);

    n=65;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);
    n=n | 0x0020;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);

    n=97;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);
    n=n ^ 0x0020;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);

    n=65;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);
    n=n ^ 0x0020;
    printf("\n\n\t\tThe current value in n = %d and n = %c....",n,n);

    getch();
  }

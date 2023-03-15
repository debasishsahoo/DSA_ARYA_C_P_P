/*IEEE 754 floating point number representation

  S     E               M
  . ........ ....................... => 32 bits

  0 10000001 01000000000000000000000

    2003      2002      2001      2000
  --------- --------- --------- ---------
  0100 0000 1010 0000 0000 0000 0000 0000 =>  4 0 A 0 0 0 0 0
  --------- --------- --------- ---------
    40 H      -6 0 H    0 0 H     0 0 H => 4 0  -6 0  0 0  0 0 H

	    0101 1111
		   +1
	    ---------
	    0110 0000



	    ffa0 => 1111 1111 1010 0000 => -60
		    0000 0000 0101 1111
				     +1
		    -------------------
		    0000 0000 0110 0000

	       0    129 - 127
  X = +5 = (-1)  x 2         x (1 . 25)



	S   E - 127
  X=(-1) x 2        x (1 . M)

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    float f=12;
    char * ch;

    clrscr();

    ch = &f;

    printf("\n\n\t\tThe current content at address %X is %2X....",ch, *ch);

    printf("\n\n\t\tThe current content at address %X is %2X....",ch+1, *(ch+1));

    printf("\n\n\t\tThe current content at address %X is %2X....",ch+2, *(ch+2));

    printf("\n\n\t\tThe current content at address %X is %2X....",ch+3, *(ch+3));

    getch();
  }
































#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int far *scr=0xb8000000;    //total 32 bit address 16 seg addr+16 offset
    int far *scr1,far *scr2;    //total 32 bit address 16 seg addr+16 offset
    int k=100;

    int *ptr;

    int i;

    clrscr();
    ptr=&k;

    scr1=&k;
    scr2=&k;
    printf("\n\n\t\tsizeof(scr1) = %d....",sizeof(scr1));
    printf("\n\n\t\tsizeof(scr2) = %d....",sizeof(scr2));



    printf("\n\n\t\tsizeof(scr1) = %d and sizeof(scr2) = %d....",
						sizeof(scr1),sizeof(scr2));

    /*for(i=0;i<4000;i+=2)
      {
	*(scr+i)='A';
	*(scr+i+1)=(i/2) % 256;
      } */

    getch();
  }

/*
-------------------------------------------------------------------------
In a computer 64 MB VRAM is there and 1024 x 768 is the resolution. Find
the maximum color support.

      26
     2            6
------------  =  2  = 64 color support
 10   8    2
2  x 2  x 2

-------------------------------------------------------------------------

for 16 million color support and 1024 x 768 resolution what will be VRAM
size required ?
		     4    10    10    24
16 million = 16 M = 2  x 2   x 2   = 2   => 24 bits => 3 bytes => 3 locations

So for 1024 x 768 resolution VRAM required is 1024 x 768 x 3 byte

--------------------------------------------------------------------------

SS:SP          16
ES:DI         2   = 65536      exe2bin abc.exe abc.com
CS:IP
DS:SI


------------- SS:SP

Stack segment

------------- DS:SI  4000h : 1234h
		     40000
Data segment          1234
		     -----
------------- CS:IP  41234h physical address



Code segment  (Body)



-------------


------------- ES:DI
Extra segment
-------------
1 111 1 111 => 8 bits

1   -> blink
111 -> BG color
1   -> High intensity
111 -> FG color

Example of far pointer

*/















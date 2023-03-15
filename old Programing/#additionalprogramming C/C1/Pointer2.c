/*

int *iptr => means iptr is a variable which contains an address and content of the address is an integer quantity...

float *fptr => means fptr is a variable which contains an address and content of the address is a float quantity...

2003 2002 2001 2000

low endian

300 =  256 + 32 + 8 + 4 = 1 0 0 1 0 1 1 0 0 = 0000 0000 0000 0000 0000 0001 0010 1100
											  --------- --------- --------- ---------
											  2003(0)   2002(0)   2001(1)   2000(44)
											  
800 =  512 + 256 + 32 = 1 1 0 0 1 0 0 0 0 0 = 0000 0000 0000 0000 0000 0011 0010 0000
											  --------- --------- --------- ---------
											  2003(0)   2002(0)   2001(3)   2000(32)

*/

#include <stdio.h>

int main() {
    int i=800;
    int *ptr;

    ptr=(char *)&i;
//    
//    printf("\n\n\t*(ptr+3) = %d, *(ptr+2) = %d, *(ptr+1) = %d and *ptr = %d...",*(ptr+3),*(ptr+2),*(ptr+1),*ptr);
//	
//	printf("\n\n\t&i=%x, i=%d, &ptr=%x, ptr=%x and *ptr=%d....",&i,i,&ptr,ptr,*ptr);
//	
//	printf("\n\n\t&i=%X, i=%d, &ptr=%X, ptr=%X and *ptr=%d....",&i,i,&ptr,ptr,*ptr);
	
	printf("\n\t\tThe current address in ptr = %x...",ptr);
    ptr++;
    printf("\n\t\tThe current address in ptr = %x...",ptr);
    ++ptr;
    printf("\n\t\tThe current address in ptr = %x...",ptr);
    ptr=ptr+1;
    printf("\n\t\tThe current address in ptr = %x...",ptr);
    ptr+=1;
    printf("\n\t\tThe current address in ptr = %x...",ptr);
	
	printf("\n\n\tEnd of the program...");
}























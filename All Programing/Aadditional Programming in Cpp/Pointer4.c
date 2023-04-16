#include <stdio.h>

int main() {
    int a,b;
    void update_cv(int,int);        //prototype declaration
    void update_rf(int *,int *);    //prototype declaration

    a=100;
    b=200;

    printf("\n\t\tAddresses of &a = %x and &b = %x....",&a,&b);
    printf("\n\t\tIn main a = %d and b = %d....",a,b);
    update_cv(a,b);		// call by value
    printf("\n\n\t\tIn main a = %d and b = %d....",a,b);

    printf("\n\n\t\t****************************************\n");

    printf("\n\t\tAddresses of &a = %x and &b = %x....",&a,&b);
    printf("\n\t\tIn main a = %d and b = %d....",a,b);
    update_rf(&a,&b);		// call by address as a value 
    printf("\n\n\t\tIn main a = %d and b = %d....",a,b);

	printf("\n\n\t\tEnd of the program...");
}

void update_cv(int x,int y) {        //call-by-value function
    printf("\n\n\t\tAddresses of &x = %x and &y = %x....",&x,&y);
    printf("\n\t\tIn update_cv x = %d and y = %d....",x,y);

    x=111;
    y=222;

    printf("\n\t\tIn update_cv x = %d and y = %d....",x,y);
}

void update_rf(int *x,int *y) {	   //call-by-address-as-a-value function
    printf("\n\n\t\tAddresses of &x = %x and &y = %x....",&x,&y);
    printf("\n\t\tContent of x = %x and y = %x....",x,y);

    printf("\n\t\tIn update_rf *x = %d and *y = %d....",*x,*y);

    *x=777;
    *y=888;

    printf("\n\t\tIn update_rf *x = %d and *y = %d....",*x,*y);
}


/*
A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), 
and all the most trivial programs can define additional functions. We can divide up our code into separate functions.	
*/

#include <stdio.h>

int main() {
	int a,b,c;

	printf("\n\n\t\tWelcome to the world of programming...");

    printf("\n\n\t\tPlease enter the first number...");
    scanf("%d",&a);

    printf("\n\n\t\tPlease enter the second number...");
    scanf("%d",&b);
	
	c=a+b;
	
	printf("\n\n\t\tSo the sum of %d and %d is %d...",a,b,c);
    
    printf("\n\n\t\tEnd of the program...");
}



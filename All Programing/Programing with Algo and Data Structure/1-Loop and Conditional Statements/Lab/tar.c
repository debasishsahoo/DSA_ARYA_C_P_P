#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even.", number) : printf("%d is odd.", number);

    return 0;
}

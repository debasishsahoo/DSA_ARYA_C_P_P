#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 0;
    printf("%d  ",c);
    c += 5;
}

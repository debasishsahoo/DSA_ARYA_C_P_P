#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
void display(struct student s);

int main()
{
    struct student s1;

    printf("Enter name:");
    scanf ("%[^\n]%*c", s1.name);
    
    
//In scanf function you can use regular expressions to restrict or validate the char you are going to read, 
//here in your question [^\n] is regular expression that will exclude \n i.e in other words scanf will read all char until you hit enter button.
//Now coming to %*c , * is used to indicate don’t assign value to name until you hit enter or scanf encounters ‘\n’.

    printf("Enter age:");
    scanf("%d", &s1.age);
    
    display(s1);   // passing structure as an argument
    
    return 0;
}
void display(struct student s) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nRoll: %d", s.age);
}

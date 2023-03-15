/*
  a+(b*c-d)  => abc*d-+

  scanned   Stack
  symbol           Postfix exp. (P)
  -----------------------------
  a         (      a

  +         (+

  (         (+(

  b         (+(    ab

  *         (+(*

  c         (+(*   abc

  -         (+(-   abc*

  d         (+(-   abc*d

  )         (+     abc*d-

  )                abc*d-+

*/


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main(void)
  {
    char ch,temp,infix[30],postfix[30],stack[20];
    int inpos,top,postpos;

    int priority(char);

    clrscr();

    printf("\n\n\t\tPlease enter the infix expression....");
    scanf("%s",infix);

    printf("\n\n\t\tSo the given infix expression is %s....",infix);

    strcat(infix,")");

    postpos=0;
    top=1;
    stack[top]='(';

    for(inpos=0;inpos<strlen(infix);inpos++)
      {
	ch=tolower(infix[inpos]);

	if (ch>='a' && ch<='z')
	  {
	    postfix[postpos]=ch;
	    postpos++;
	  }
	else if (ch=='(')
	  {
	    top++;
	    stack[top]='(';
	  }
	else if (ch==')')
	  {
	    do
	      {
		temp=stack[top];
		top--;

		if (temp!='(')
		  {
		    postfix[postpos]=temp;
		    postpos++;
		  }
	      }while(temp!='(');
	  }
	else
	  {
	     while(priority(ch)<=priority(stack[top]))
	       {
		 temp=stack[top];
		 top--;
		 postfix[postpos]=temp;
		 postpos++;
	       }

	     top++;
	     stack[top]=ch;
	  }
      }

    postfix[postpos]='\x0';

    printf("\n\n\t\tAnd the corresonding postfix expression is %s....",postfix);

    getch();
  }

int priority(char chh)
  {
    if (chh=='^') return 3;
    if (chh=='*' || chh=='/') return 2;
    if (chh=='+' || chh=='-') return 1;
    else return 0;
  }




































//(Q) Infix   : (a*b+c*d)+(e/f))

//(P) Postfix : ab*cd*+ef/+

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
  {
    int top=0,inpos=0,postpos=0,top_precedence,cur_precedence,p_element;
    char stack[20],infix[20],postfix[20],ch;

    int op_precedence(char);
    void stack_push(char [],int *,char);
    char stack_pop(char [],int *);

    clrscr();

    printf("\n\n\t\tPlease enter the infix notation....");
    scanf("%s",&infix);

    strcat(infix,")");

    stack_push(stack,&top,'(');

    while(top!=NULL)
      {
	ch=infix[inpos];

	if (ch=='(')
	  {
	    stack_push(stack,&top,ch);
	  }
	else if (ch>='a' && ch<='z')
	  {
	    postfix[postpos]=ch;
	    postpos++;
	  }
	else if (ch==')')
	  {
	    p_element=stack_pop(stack,&top);

	    while(p_element!='(')
	      {
		postfix[postpos]=p_element;
		postpos++;

		p_element=stack_pop(stack,&top);
	      }
	  }
	else
	  {
	    top_precedence=op_precedence(stack[top]);
	    cur_precedence=op_precedence(ch);

	    while (top_precedence>=cur_precedence)
	      {
		p_element=stack_pop(stack,&top);

		postfix[postpos]=p_element;
		postpos++;

		top_precedence=op_precedence(stack[top]);
	      }

	    stack_push(stack,&top,ch);
	  }

	inpos++;
      }

    postfix[postpos]='\x0';

    printf("\n\n\t\tSo the required postfix expression will be %s....",postfix);

    getch();
  }

char stack_pop(char stk[],int *tt)
  {
    char item;

    item=stk[*tt];

    printf("\n\t\tPopped item = %c....",item);

    (*tt)--;

    return(item);
  }

void stack_push(char stk[],int *tt,char item)
  {
    (*tt)++;

    stk[*tt]=item;

    printf("\n\t\tPushed item = %c....",item);
  }

int op_precedence(char op)
  {
    if (op=='^') return(3);
    if (op=='*' || op=='/') return(2);
    if (op=='+' || op=='-') return(1);

    return(0);
  }
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define NULL 0

void main(void)
  {
    char infix[50],postfix[50];
    char ch,stack[50];
    int top=NULL,maxstack=49,postfixpos=0,infixpos=0;
    void stack_push(char [],int *,char,int);
    char stack_pop(char [],int *);
    int op_pre(char);

    clrscr();

    printf("\n\n\t\tPlease enter an infix expression....");
    scanf("%s",infix);

    strcat(infix,")");
    printf("\n\n\t\tSo the input infix expression is %s....",infix);

    stack_push(stack,&top,'(',maxstack);

    while(top!=NULL)
      {
	ch=infix[infixpos];

	switch(ch)
	  {
	    case '+':
	    case '-':
	    case '*':
	    case '/':
	    case '^':
	      //printf("\n\n\t\tI am operator....");
	      while (op_pre(ch)<=op_pre(stack[top]))
		{
		  postfix[postfixpos++]=stack_pop(stack,&top);
		}

	      stack_push(stack,&top,ch,maxstack);

	      break;

	    case '(':
	      //printf("\n\n\t\tI am opening bracket....");
	      stack_push(stack,&top,'(',maxstack);
	      break;

	    case ')':
	      //printf("\n\n\t\tI am closing bracket....");
	      do
		{
		  ch=stack_pop(stack,&top);

		  if(ch!='(') postfix[postfixpos++]=ch;
		}while(ch!='(');

	      break;

	    default:
	      //printf("\n\n\t\tI am operand....");
	      postfix[postfixpos]=ch;
	      postfixpos++;
	      break;
	  }

	++infixpos;
      }

    postfix[postfixpos]=NULL;

    printf("\n\n\t\tSo the required postfix expression is %s....",postfix);

    getch();
  }

void stack_push(char stk[],int *tt,char ch,int maxstk)
  {
    if (maxstk==*tt)
      {
	printf("\n\n\t\tO V E R F L O W !!!!");
	printf("\n\n\t\tNo space for push operation....");
	exit(0);
      }
    else
      {
	++*tt;
	stk[*tt]=ch;
      }
  }

char stack_pop(char stk[],int *tt)
  {
    char ch;

    if (*tt==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W !!!!");
	printf("\n\n\t\tNo data for pop operation....");
	exit(0);
      }
    else
      {
	ch=stk[*tt];
	--*tt;
      }

    return(ch);
  }

int op_pre(char op)
  {
    if (op=='^') return 3;
    else if (op=='*' || op=='/') return 2;
    else if (op=='+' || op=='-') return 1;
    else return 0;
  }


















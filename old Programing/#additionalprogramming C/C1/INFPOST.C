//            (Q) => (P)

// (Q) Infix   :   (a + b) * (c + d)
// (P) Postfix :   a b + c d + *

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
  {
    char stack[20],infix[20],postfix[20],temp,ch;
    int i,inpos=0,top=0,postpos=0,cur_prece,top_prece;
    int op_precedence(char);
    void stack_push(char [],int *,char);
    char stack_pop(char [],int *);

    clrscr();

    printf("\n\n\t\tPlease enter an infix expression....");
    scanf("%s",&infix);

    strcat(infix,")");

    stack_push(stack,&top,'(');

    while(top!=0)
      {
	ch=infix[inpos];

	if (ch=='(')                    //opening parenthesis
	  {
	    stack_push(stack,&top,'(');
	  }
	else if (ch==')')               //closing parenthesis
	  {
	    temp=stack_pop(stack,&top);

	    while(temp!='(')
	      {
		postpos++;
		postfix[postpos]=temp;

		temp=stack_pop(stack,&top);
	      }
	  }
	else if (ch>='a' && ch<='z')    //operand found
	  {
	    postpos++;
	    postfix[postpos]=ch;
	  }
	else                            //operator found
	  {
	    cur_prece=op_precedence(ch);
	    top_prece=op_precedence(stack[top]);

	    while(top_prece>=cur_prece)
	      {
		temp=stack_pop(stack,&top);
		postpos++;
		postfix[postpos]=temp;

		top_prece=op_precedence(stack[top]);
	      }

	    stack_push(stack,&top,ch);
	  }

	inpos++;
      }

    printf("\n\n\t\tSo the required postfix expression will be ");

    for(i=1;i<=postpos;i++)
      printf("%c",postfix[i]);

    printf("....");

    getch();
  }

char stack_pop(char stk[],int *tt)
  {
    char ch;

    ch=stk[*tt];

    printf("\n\t\tPopping %c....",ch);

    (*tt)--;

    return(ch);
  }

void stack_push(char stk[],int *tt,char ch)
  {
    printf("\n\t\tPushing %c....",ch);

    (*tt)++;

    stk[*tt]=ch;
  }

int op_precedence(char op)
  {
    if (op=='^') return(3);
    if (op=='*' || op=='/') return(2);
    if (op=='+' || op=='-') return(1);

    return(0);
  }
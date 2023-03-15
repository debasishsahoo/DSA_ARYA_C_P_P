// C Program for Infix to Postfix conversion
// Array based stack implementation
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

char stk[20];
int top = -1;

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}

char peek()
{
    return stk[top];
}

char pop()
{
    if (isEmpty())
        return -1;

    char ch = stk[top];
    top--;
    return (ch);
}

void push(char oper)
{
    if (isFull())
        printf("Stack Full!!!!");

    else
    {
        top++;
        stk[top] = oper;
    }
}

// A utility function to check if the given character is operand
int checkIfOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// Function to compare precedence
// If we return larger value means higher precedence
int precedence(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}

// The driver function for infix to postfix conversion
int covertInfixToPostfix(char *expression)
{
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i)
    {
        // Here we are checking is the character we scanned is operand or not
        // and this adding to to output
        if (checkIfOperand(expression[i]))
            expression[++j] = expression[i];

        // Here, if we scan character ')', we need push it to the stack.
        else if (expression[i] == '(')
            push(expression[i]);

        /*Here, if we scan character is an ')',
           we need to pop and print from the stack
           do this until an '(' is encountered in the stack. */
        else if (expression[i] == ')')
        {
            while (!isEmpty() && peek() != '(')
                expression[++j] = pop();
            if (!isEmpty() && peek() != '(')
                return -1; // invalid expression
            else
                pop();
        }
        else // if an operator
        {
            while (!isEmpty() && precedence(expression[i]) <= precedence(peek()))
                expression[++j] = pop();
            push(expression[i]);
        }
    }

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty())
        expression[++j] = pop();

    expression[++j] = '\0';
    printf("%s", expression);
}

int main()
{
    char expression[] = "((a+(b*c))-d)";
    covertInfixToPostfix(expression);
    return 0;
}
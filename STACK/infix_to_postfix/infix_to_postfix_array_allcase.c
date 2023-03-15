// C Program for Infix to Postfix conversion
// Array based stack implementation
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
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
        return 0;

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
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

// Fucntion to compare precedence
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
int covertInfixToPostfix(char *expr)
{
    int i, j;

    for (i = 0, j = -1; expr[i]; ++i)
    {

        if (checkIfOperand(expr[i]))
            expr[++j] = expr[i];

        else if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
            push(expr[i]);

        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            if (expr[i] == ')')
            { // keep popping & adding to expression until opening pair found
                while (!isEmpty() && peek() != '(')
                    expr[++j] = pop();

                // pops '('
                pop();
            }

            if (expr[i] == ']')
            { // keep popping & adding to expression until opening pair found
                while (!isEmpty() && peek() != '[')
                    expr[++j] = pop();

                // pops '['
                pop();
            }
            if (expr[i] == '}')
            { // keep popping & adding to expression until opening pair found
                while (!isEmpty() && peek() != '{')
                    expr[++j] = pop();

                // pops '}'
                pop();
            }
        }
        else // if an opertor
        {
            while (!isEmpty() && precedence(expr[i]) <= precedence(peek()))
                expr[++j] = pop();
            push(expr[i]);
        }
    }

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty())
        expr[++j] = pop();

    expr[++j] = '\0';
    printf("%s", expr);
}

int main()
{
    char expression[] = "{[a(3*5)]-d}";
    covertInfixToPostfix(expression);
    return 0;
}
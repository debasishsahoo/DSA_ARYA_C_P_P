// This uses struct based stack implimentation of Stack
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// A structure to represent a stack
struct Stack
{
    int top;
    int maxSize;
    // we are storing string in integer array, this will not give error
    // as values will be stored in ASCII and returned in ASCII thus, returned as string again
    int *array;
};

struct Stack *create(int max)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->maxSize = max;
    stack->top = -1;
    stack->array = (int *)malloc(stack->maxSize * sizeof(int));
    return stack;
}

// Checking with this function is stack is full or not
// Will return true is stack is full else false
// Stack is full when top is equal to the last index
int isFull(struct Stack *stack)
{
    if (stack->top == stack->maxSize - 1)
    {
        printf("Will not be able to push maxSize reached\n");
    }
    // Since array starts from 0, and maxSize starts from 1
    return stack->top == stack->maxSize - 1;
}

// By definition the Stack is empty when top is equal to -1
// Will return true if top is -1
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Push function here, inserts value in stack and increments stack top by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
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

    // Stack size should be equal to expression size for safety
    struct Stack *stack = create(strlen(expr));
    if (!stack) // just checking is stack was created or not
        return -1;

    for (i = 0, j = -1; expr[i]; ++i)
    {
        // Here we are checking is the character we scanned is operand or not
        // and this adding to to output.
        if (checkIfOperand(expr[i]))
            expr[++j] = expr[i];

        else if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
            push(stack, expr[i]);

        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            if (expr[i] == ')')
            {
                while (!isEmpty(stack) && peek(stack) != '(')
                    expr[++j] = pop(stack);

                // pops '('
                pop(stack);
            }

            if (expr[i] == ']')
            {
                while (!isEmpty(stack) && peek(stack) != '[')
                    expr[++j] = pop(stack);

                // pops '['
                pop(stack);
            }
            if (expr[i] == '}')
            {
                while (!isEmpty(stack) && peek(stack) != '{')
                    expr[++j] = pop(stack);

                // pops '}'
                pop(stack);
            }
        }
        else // if an opertor
        {
            while (!isEmpty(stack) && precedence(expr[i]) <= precedence(peek(stack)))
                expr[++j] = pop(stack);
            push(stack, expr[i]);
        }
    }

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty(stack))
        expr[++j] = pop(stack);

    expr[++j] = '\0';
    printf("%s", expr);
}

int main()
{
    char expression[] = "{[a(3*5)]-d}";
    covertInfixToPostfix(expression);
    return 0;
}
// C Program for Implementation of stack (array) using structure
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
    int top;
    int maxSize;
    int* array;
};

struct Stack* create(int max)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->maxSize = max;
    stack->top = -1;
    stack->array = (int*)malloc(stack->maxSize * sizeof(int));
    //here above memory for array is being created
    // size would be 10*4 = 40
    return stack;
}

// Checking with this function is stack is full or not
// Will return true is stack is full else false
//Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
    if(stack->top == stack->maxSize - 1){
        printf("Will not be able to push maxSize reached\n");
    }
    // Since array starts from 0, and maxSize starts from 1
    return stack->top == stack->maxSize - 1;
}

// By definition the Stack is empty when top is equal to -1
// Will return true if top is -1
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

// Push function here, inserts value in stack and increments stack top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("We have pushed %d to stack\n", item);
}

// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
struct Stack* stack = create(10);

    push(stack, 5);
    push(stack, 10);
    push(stack, 15);

    int flag=1;
    while(flag)
    {
        if(!isEmpty(stack))
            printf("We have popped %d from stack\n", pop(stack));
        else
            printf("Can't Pop stack must be empty\n");
         flag=0;
    }
    return 0;
}

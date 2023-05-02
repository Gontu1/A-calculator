#include <stdio.h>
#include <string.h>
#include "stack.h"
#include <stdlib.h>
#define ERROR_VALUE -99999
//pop:  remove an item from the stack
//Parameters:  stack: a pointer to a stack structure
//result: a pointer to an integer to hold the value from the top of the stack.
//Returns:  non-zero on success, 0 on failure (if the stack is empty)
int pop(arrayStack_t* stack, int* result){
    if(stack -> top == 0 )//Stack is empty
    return 0;
    stack ->top--; // first decrement it and then it points to the value we want
    *result = stack -> stackArray[stack->top];
    return 1;
}
//push:  pushes an item on the stack
//Parameters:  stack: a pointer to a stack structure
//             value: the value to push
//Returns:  None
void push(arrayStack_t* stack,int value){
    if(stack->top >= stack->arraySize){
        int* oldArray = stack->stackArray;
        stack->stackArray = (int*)malloc(sizeof(int)*stack->arraySize*2);
    for (int i =0;i < stack ->arraySize;i++)
    {
        stack-> stackArray[i]=oldArray[i];
    }
    stack ->arraySize = stack->arraySize * 2;
    free(oldArray);
    }
//as we get here ,we know that the stack is big enough
stack -> stackArray[stack->top++]=value;
//initStack:  sets up a stack with an initial size
//Parameters:  stack: a pointer to a stack structure
//             initialSize: the initial size for the stack
//Returns:  None
//Side Effect: Allocates memory for the stack which must be freed by the caller.
#define INTIAL_STACK_SIZE = 5;
void initStack(arrayStack_t* stack, int initialSize){
    stack->arraySize = initialSize;
    stack -> stackArray =(int*)malloc(sizeof(int)*initialSize);
    stack -> top=0;
}
}

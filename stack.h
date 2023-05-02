#define ERROR_VALUE -99999
typedef struct arrayStack{
    int arraySize;
    int* stackArray;
    int top;
}arrayStack_t;
int pop(arrayStack_t* stack, int* result);
void push(arrayStack_t* stack, int value);
#define INITIAL_STACK_SIZE 5
void initStack(arrayStack_t* stack, int initialSize);


#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isInteger(char* valString){
   if (!strcmp(valString,"0")) return 1;
   if (atoi(valString)==0) return 0;
   return 1;
}
int main(){
        arrayStack_t stack;
        initStack(&stack, 10);
        char character[MAX_NUMBER_DIGITS];
        printf("Calculator Input:");
        scanf("%s", character);
        while(character[0]='q'){
                if(isInteger(character)==1){
                        push(&stack, atoi(character));
                }
                else if (character [0]=='+'|| character[0]=='-'|| character[0]=='*' || character[0]=='/'){

int num1,num2;
                        if (pop(&stack,&num1)==0){
                                printf("Empty Stack\n");
                        }
                        else if(pop(&stack, &num2)==0){
                                printf("Not enough arguments\n");
                                push(&stack, num1);
                        }else if(character[0]=='+'){
                                push(&stack,num2+num1);
                                printf("%d\n", num2+num1);
                        }
                        else if(character[0]=='-'){
                                push(&stack,num1-num2);
                                prinf("%d\n",num1-num2);
                        }
                        else if(character[0]=='*'){
                        else if(character[0]=='/'){
                                if(num2==0){
                                        printf("ERROR:Division by 0\n");
                                        int value;
                                        while(pop(&stack,&value)){
                                                continue;
                                        }
                                }
                                else{
                                        push(&stack,num1/num2);
                                        printf("%d\n", num1/num2);
                                }
                        }
                }
                else{
                        printf("ERROR: Invalid Input\n");
                }
                scanf("%s", character);
                                        
 }
        free(stack.stackArray);
}


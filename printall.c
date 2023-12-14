#include "monty.h"


#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;


void push(int value, int line_number) {
    
    if (top == STACK_SIZE - 1) {
        fprintf(stderr, "L%d: error: stack overflow\n", line_number);
        exit(EXIT_FAILURE);
    }

    
    stack[++top] = value;
}


void printAll() 
{
    
    if (top == -1) {
        return; 
    }

 
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() 
{
    
    push(5, 1);
    push(10, 2);
    push(15, 3);

    printf("Stack contents:\n");
    printAll();

    return 0;
}

// coding of Infix to Postfix using stack 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack     // creating  a general stack
{
    int size;
    int top;
    char *arr;  // here the array elements will be stored in charachter hence using char array pointer
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Stack top
int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int precedence(char ch)
{
    if(ch == '*' || ch == '/'){
        return 3;                      // lets say in precedence order it is no.3
    }
    else if(ch == '+' || ch == '-')
    {
        return 2;
    }else
    {
        return 0;          // flase ie it is an operand 
    }
}

int isOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }else{
        return 0;
    }
}

char *infixtopostfix(char *infix)
{
    // creating a stck
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 20;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    // creating postfix charachter array
    char *postfix = (char*)malloc((strlen(infix)+1) * sizeof(char));   // strlen is defined function of c to calculate size 
    // so size of this postfix array will be equal to (infix array + 1) ie adding null char as well
    int i=0;   // track infix traversal
    int j=0;   // track postfix traversal or addition of elements in array

    while(infix[i] != '\0')
    {
        if(!isOperator(infix[i])){  // agar infix ka i element is not equal to any operator or it is an operand then add in postfix array
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i]) > precedence(stackTop(sp)))  // applying condition of stack filling
            {
                push(sp, infix[i]);                           // if true then push operator in stack
                i++;                                     // then forward in infix array to analyse the next array element
            }
            else{
                postfix[j] = pop(sp);       // otherwise pop that operator already in stack and store it in postfix array
                j++;
            }
        }
    }
    // now when have transversed through our all infix array there might be some operators left in stack that we need to pop now
    while(!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char* infix = "a-b+t/6";

    printf("infix is %s", infix);
    printf("\nPostfix is %s", infixtopostfix(infix));
    
    return 0;
}

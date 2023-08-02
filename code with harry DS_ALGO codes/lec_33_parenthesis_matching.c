#include <stdio.h>
#include <stdlib.h>
 
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
// instead of giving the size of exp as const value (as here 20) it is recommended to give the size of exp :-->
// strlen()   etc functions can be used

int parenthesisMatch(char *exp)
{
    // creating a stck and initialising its properties
    struct stack* sp;
    sp->size = 20;     // let assume we had sp stack of 20 we can change it accordingly
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));
    // now since stack has been created lets put conditions
    for(int i=0; exp[i] != '\0'; i++)   // since last charachter of aur exp array is '\0'
    {
        if(exp[i] == '(')   // if it is opening parenthesis  ----> push it inside the stack
        {
            push(sp, '(');
        }
        else if(exp[i] == ')')  // if it is a closing parenthesis ----> then pop the ) from the stack but before that we need to 
        {                                            // check the condition if stack is empty sice we cant pop from an empty stack
            if(isEmpty(sp)){
                return 0;    // false
            }else
            {
                pop(sp);
            }                   
        }
    }
    // matlab finally jo stack milegi after traveersing expression my stack must be empty
    if(isEmpty(sp))                 // yahi condition we used in main if-else condition of the function
    {
        return 1;
    }else{
        return 0;
    }
}
 

int main()
{
    char* exp = "8*(9)";

    if(parenthesisMatch(exp))    // ie if it is returning something or if it return true
    {
        printf("Parenthesis is matching ");
    }
    else{
        printf("Parenthesis is not matching ");
    }
    
    return 0;
}

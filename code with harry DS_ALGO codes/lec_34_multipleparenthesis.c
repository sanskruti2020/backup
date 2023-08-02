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

int match(char a, char b)
{
    if(a=='{' && b=='}'){
        return 1;        // ie condition satisfied ie it has matched
    }
    if(a=='(' && b==')'){
        return 1;        
    }
    if(a=='[' && b==']'){
        return 1;        
    }
    else{
        return 0;
    }
}

int parenthesisMatch(char *exp)
{
    // creating a stck and initialising its properties
    struct stack* sp;
    sp->size = 20;     
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));
    char popped_ch;

    for(int i=0; exp[i] != '\0'; i++) 
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')  // checking all types of opening parenthesis  
        {
            push(sp, exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {                                            
            if(isEmpty(sp)){
                return 0;    
            }
             // checking the condition if the popped element and exp[i] element equal hai ya nahi-----> we will use match() function here
            popped_ch = pop(sp);  // checking condition if not matching return false
            if(!match(popped_ch, exp[i]))    // (opening_paren, closing paren)
            {
                return 0;          // ie if they are not matched then false
            }
        }
    }
    
    if(isEmpty(sp))               
    {
        return 1;
    }else{
        return 0;
    }
}
 

int main()
{
    char* exp = "{8*(9)}";

    if(parenthesisMatch(exp))    
    {
        printf("Parenthesis is matching ");
    }
    else{
        printf("Parenthesis is not matching ");
    }
    
    return 0;
}

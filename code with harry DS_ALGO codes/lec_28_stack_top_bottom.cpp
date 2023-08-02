#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int * arr;
};  // dont forget to give the semicolon otherwise code will not run

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)  // here in main in ptr we will pass sp so sp ka top(sp->top) == -1 means stack is empty
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val)  // means push(stack pointer, the value the we need to push in stack)
{
    // but first we need to check if stack is full or not 
    if(isFull(ptr)) // means calling isFull(ptr) function is true then return 1 ie we cannot add element to the stackk
    {
        printf("stck is overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val; // means array ke top element ko equal kar do val ke after increemnt in top
    }
}

int pop(struct stack *ptr)
{        // dekho ptr->top means ptr pointer ka top index and ptr->arr[ptr->top] ka matlab stack ke topmaost element
    if(isEmpty(ptr))
    {
        printf("stck is underflow\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Stack top
int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
//Stack bottom
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}


int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack)); // dynamically the memory is allocated here for the stack
    sp->size = 10; // we have put the maximum size of the stack as 10
    sp->top = -1; // since the stack is empty hence index of top is -1
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("stack has been created succesfully .\n");

    printf("%d\n", isEmpty(sp)); // here it will return 1 if it is an empty stack else it will return 0
    printf("%d\n", isFull(sp));  // here it will return 1 if it is an full stack else it will return 0

    push(sp, 45);    // bottom most value of this stack
    push(sp, 34);
    push(sp, 4);
    push(sp, 5);
    push(sp, 67);
    push(sp, 45);
    push(sp, 89);
    push(sp, 90);
    push(sp, 87);   // top most value of this stack
    push(sp, 4);    //  ---> pushed 10 values now the stack has become full
    push(sp, 90);
    printf(" after pushing one element :\n");
    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));
    printf(" after popping overflowed %d element(11 th element) \n", pop(sp));

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    printf("The topmost value of this stack is %d \n", stackTop(sp));
    printf("The bottom most value of this stack is %d \n", stackBottom(sp));


    return 0;
}
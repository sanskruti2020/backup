// Implementation of stack using array
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)   // functon to know that stack is completetly empty or not ie since we cannot perform pop() in empty stack
{
    if(ptr->top == -1)
    {
        return 1;
    }                      // no need to write else statement without it also programm will run
}

int isFull(struct stack *ptr)   // functon to know that stack is completetly filled or not ie since we cannot perform push() in filled stack
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
}

int main()
{
    // struct stack s;            // see here s is the value or we can say a object hence to acess its functions we need a dot( . ) operator
    // s.size = 80;
    // s.top = -1;              // since the siack is empty here hence start with index = -1
    // s.arr=(int *)malloc(s.size * sizeof(int));

              // OR 

    struct stack *s;            // see here s is the pointer so here to acess its functions we need a ->  operator
    s->size = 80;
    s->top = -1;              // since the siack is empty here hence start with index = -1
    s->arr=(int *)malloc(s->size * sizeof(int));

    // check if stack is empty
    if(isEmpty(s))
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is not empty");
    }

    return 0;
}
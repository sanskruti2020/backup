#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node            // for creating a linked list
{
    int data;
    struct Node * next;
};

void linkedlist_traversal(struct Node * ptr) // to traverse or to print elements of the list
{
    while(ptr!=NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr=ptr->next;
    }
}

int isEmpty(struct Node * top)
{
    if(top == NULL)
    {
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct Node *top)
{
    //firstly we need to check if we are able to dynamically able to allocate a memory or not
    struct Node * p =(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node* push(struct Node * top, int x)    // we used return type- struct Node* since it will return a node that we need to push
{
    // first checking if stack is full or not
    if(isFull(top)){
        printf("stack overflow");
    }else{
        struct Node *n =(struct Node*)malloc(sizeof(struct Node));   // n is the new node pointer that we want to insert here
        n->data = x;   // setting n ka data equal to x
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node** top)               // VERRY VERRY IMPORTANT FUNCTION
{
    if(isFull(*top))
    {
        printf("stack underflow\n");
    }else{
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    struct Node *top = NULL;     // this means initially my linked list is empty   ---- here top is same as head pointer
    top = push(top, 43);
    top = push(top, 29);
    top = push(top, 47);
    int element = pop(&top);
    printf("popped element is %d \n", element);
    linkedlist_traversal(top);

    return 0;
}
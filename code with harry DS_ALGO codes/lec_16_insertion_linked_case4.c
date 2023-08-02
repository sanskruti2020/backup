// Case 4 : Insert after a node
// This case is same as case2 just here instead of index number  a pointer will be given already
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void indexinsert(struct Node *ptr)  // this function is just to print the data of the nodes 
{
    while(ptr!=NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr=ptr->next;
    }
};

struct Node * insertAfterNode(struct Node *head, struct Node *q, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=q->next;
    q->next=ptr;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=4;
    second->next=third;

    third->data=5;
    third->next=NULL;

    printf(" Initial array : \n");
    indexinsert(head);

    printf(" After inserting after the node : \n"); // if i want to insert ptr after second node
    insertAfterNode(head, second, 45);
    indexinsert(head);

    return 0;
}
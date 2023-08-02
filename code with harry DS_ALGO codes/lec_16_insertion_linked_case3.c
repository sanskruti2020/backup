// Case 3 : insert at the end 
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void indexinsert(struct Node *ptr)  // this function is just to printthe data of the nodes 
{
    while(ptr!=NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr=ptr->next;
    }
};

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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

    printf(" After inserting at end the  array is : \n");
    head = insertAtEnd(head, 76);
    indexinsert(head);

    return 0;
}
// Case 3 : Dlete the last element 
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void indexinsert(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr=ptr->next;
    }
};

struct Node *deleteEnd(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
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

    printf(" Initial linked list : \n");
    indexinsert(head);

    head=deleteEnd(head);  // for deleting last element 
    printf(" After deleting the last element :\n");
    indexinsert(head);

    return 0;
}
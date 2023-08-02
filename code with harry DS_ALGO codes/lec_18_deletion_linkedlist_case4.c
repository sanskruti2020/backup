// Case 4- Deleting a node with a given value
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

struct Node *deleteNode(struct Node *head, int value)
{ 
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->data!=value && q->next!=NULL)  // here specifying both conditions is must
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
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

    head=deleteNode(head, 4);  // deleting a node containing data = 4
    printf(" After deleting element at agiven node :\n");
    indexinsert(head);

    return 0;
}
// Case 2 : Deleting at a index
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

struct Node *deleteindex(struct Node *head, int index)
{ 
    struct Node *p=head; // p ek aisa pointer create kiya jo head ko point kar raha
    struct Node *q=head->next; // q ek aisa pointer create kiya jo head ke next node ko point kar raha
    // now creating a for loop to reach p to index-1 and q to reach the node(index) which we want to delete
    for(int i=0; i<index-1; i++)
    {
        p=p->next;  // incrementing p and q
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

    head=deleteindex(head, 1);  // for deleting second element of linked list index=1
    printf(" After deleting element at a index :\n");
    indexinsert(head);

    return 0;
}
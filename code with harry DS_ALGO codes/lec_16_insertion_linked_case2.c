// Case 2-----> Insertion in the between 
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

struct Node * insertAtIndex(struct Node *head, int data, int index) // function to insert a node in between of the array
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node)); // as usual allocating memory for the node 
    struct Node * p = head; // we made a pointer equals to the head node this p will move forward the array till index-1
    int i = 0;
    while(i!=index-1)  // this code is made to make p stand one node prior to the node at index where we want to insert ptr
    {
        p = p->next;
        i++;
    }
    ptr->data=data; // this line is must to set the new data
    ptr->next=p->next; 
    p->next=ptr;
    return head;
};

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

    printf(" After inserting element in between :\n");
    insertAtIndex(head, 43, 2);
    indexinsert(head);

    return 0;
}
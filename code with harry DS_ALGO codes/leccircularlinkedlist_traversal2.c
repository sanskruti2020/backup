#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circulartraversal(struct Node *head)
{
    struct Node *ptr=head; 
    do  
    {
        printf("element is : %d \n", ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node)); 
    ptr->data=data;  

    struct Node *p=head->next;

    while(p->next !=head)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->next=head;
    head=ptr; 
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=4;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=87;
    fourth->next=head;

    circulartraversal(head);
    head=insertAtFirst(head, 34);
    printf("after insertion : \n");
    circulartraversal(head);

    return 0;
}
// case 1 : circular traversal method 1
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circulartraversal(struct Node *head)
{
    struct Node *ptr=head; // creating a pointer which is pointing to the place where head is pointed

    printf("element is : %d \n", ptr->data); // this two lines is must because without this nothing will be printed since ptr is already pointing to head so while loop will not be printed
    ptr=ptr->next;                        // this two statements will make ptr to point next node for while loop to run

    while(ptr!=head)
    {
        printf("element is : %d \n", ptr->data);
        ptr=ptr->next;
    }
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

    return 0;
}
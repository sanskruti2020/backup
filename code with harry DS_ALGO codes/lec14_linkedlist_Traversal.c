#include <stdio.h>
#include <stdlib.h>  // since we are using malloc here

struct Node           //     |__data__|__nextpointer__|   this is demonstration of a node
{
    int data;
    struct Node *next;  // creting the pointer here of struct node
};

void linkedlist_traversal(struct Node *ptr) // it is created to display the elements in list and will take a pointer ptr of the struct Node as an argument
{                                  // here this (struct Node*ptr) is the pointer which will point to the head node
    while(ptr!=NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr=ptr->next;    // then to print next data in node we pointed it to next
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate the memory for nodes in the linked list in Heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data=7;
    head->next=second;

    // link second and third nodes
    second->data=11;
    second->next=third;

    // Terminate the list at the third node
    third->data=33;
    third->next=NULL;

    linkedlist_traversal(head);  // here head is the pointer of struct Node *ptr ka

    return 0;
}
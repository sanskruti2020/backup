// Case 1-----> Insertion in the beginning
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

struct Node * insertAtFirst(struct Node *head, int data)   // this function will return a new head pointer of struct Node
{        // int data is the new data which we need to insert in the new head (ie ptr)
    // allocating memory for the new pointer
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node)); // here ptr is the new head which we are creating here and allocating memory to it
    ptr->data=data; // this means ptr ke data ko barabar kar do jo data hum dege as an argument in this function
    ptr->next=head;  // ptr is the new head and head is actual initaial head to whose beginning we need to inserrt ptr
    return ptr; // now returnong the new head(which is ptr)
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

    printf(" After inserting element at the beginning :\n");
    head = insertAtFirst(head, 45);  // the returned value is assigned to the array now 
    indexinsert(head);

    return 0;
}
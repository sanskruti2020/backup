#include <stdio.h>
// Deletion of an element in the given array :
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void indexdeletion(int arr[], int size, int index)
{
    for(int i=index; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[10]={2,1,4,6,8};
    int size=5, index=1;
    display(arr, size);
    indexdeletion(arr, size, index);
    size-=1;
    display(arr, size);

    return 0;
}
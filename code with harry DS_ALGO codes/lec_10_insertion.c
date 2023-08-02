#include <stdio.h>
// Insertion of an element in the given array :
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int indexinsertion(int arr[], int size, int element, int capacity, int index)
{
    if(size>=capacity)  // here capacity of this array is 10 ie it can store maximum 10 elements 
    {
        return -1;
    }
    for(int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main()
{
    int arr[10]={2,1,4,6,8};  // here size represents the no of used element of the array  and capacity (10 ) is the total size of the array
    int size=5, index=3; // index means the position at which i need to insert the element
    int element = 45; // the element which we need to insert here 
    display(arr, size);
    indexinsertion(arr, size, element, 10, index);
    size+=1; // since we have inserted an element we need to increase its size 
    display(arr, size);

    return 0;
}
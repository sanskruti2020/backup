#include <stdio.h>
// traversal of the array ie visiting the filled elements :
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[10]={2,1,4,6};
    display(arr, 4);

    return 0;
}
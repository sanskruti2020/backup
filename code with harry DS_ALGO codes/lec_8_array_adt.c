#include <stdio.h>
#include <stdlib.h> // malloc() comes under this library 

// here myarray is created as an Abstract data type 
struct myarray  // if we are using c++ then we can create a class instead of structure
{
    int total_size;
    int used_size;
    int *ptr; // this pointer will point to the first element of the array

};
// here tsize refers to the total size and usize refer to the used size which user will provide  and (struct myarray *a ) will refer to the object of the structure
void createarray(struct myarray *a, int tsize, int usize)// here i have created a function create array which will take(....)info from the user
{
    // here *a is the pointer taken up by the user and passed in this function since it is the pointer when we will define it in main we will take the adress of this pointer
    //(*a).total_size = tsize;
    //(*a).used_size = usize;
    //(*a).ptr = (int*)malloc(tsize*sizeof(int));                       // it is function of c used to allocate size here to this array

    // or we can also use an arrow operator instead of above syntax
                                            //      OR
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));
}

void set_val(struct myarray *a) // to take input values of the array from the user
{    
    int n;
    for(int i=0; i<a->used_size; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
}

void show(struct myarray *a) // to display the no of elements used of this array this show function is created
{
    for(int i=0; i<a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myarray marks; // i have creatred here an object of the structure myarray
    createarray(&marks, 10, 2); // calling the function created above
    printf(" we are running set_val now : \n");
    set_val(&marks);
    printf(" we are running show now : \n");
    show(&marks);

    return 0;
}
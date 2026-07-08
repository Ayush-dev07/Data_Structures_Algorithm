//Linear Search methods

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void display(struct array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

//Transposition
int LinearSearch(struct array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

//Found element is swapped with the element at (i-1) index.

//Move to head
int LinearSearch(struct array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

//Found element is swapped with the first element in an array
//Very efficient for repetetive searches because for the next search time complexity will be O(1)

int main()
{
    struct array arr={{2,3,4,5,6}, 10, 5};
    
    printf("%d\n", LinearSearch(&arr, 6));
    display(arr);

    return 0;
}
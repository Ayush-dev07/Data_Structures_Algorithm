//Sorted array operations

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


//Insert an element in a sorted array

void insertsort(struct array *arr, int x)
{
    int i=arr->length-1;
    if (arr->length==arr->size)
        return;
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

//Check if an array is sorted or not

int isSorted(struct array arr)
{
    int i;
    for (i=0; i<arr.length-1 ; i++)
    {
        if (arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

//Rearrange all negatives to left side of an array and all positives to the right side.
void rearrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while (arr->A[i]<0) i++;
        while (arr->A[j]>0) j--;
        if(i<j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main()
{
    struct array arr={{2,-9,21,-15,22}, 10, 5};
    
    rearrange(&arr);
    display(arr);
    return 0;
}
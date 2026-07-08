//Array Abstract data type
//We have to learn representation and operations

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void append(struct array *arr, int x)
{
    if (arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void insert(struct array *arr, int index, int x)
{
    int i;
    if(index>=0 && index <= arr->length)
    {
        for(i=arr->length; i>index; i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int get(struct array arr, int index)
{
    if(index>0 && index<arr.length)
        return arr.A[index];
    return -1;
}

void set(struct array *arr, int index, int x)
{
    if(index>0 && index<arr->length)
        arr->A[index]=x;
}

int max(struct array arr)
{
    int max=arr.A[0];
    int i;
    for (i=1;i<arr.length;i++)
    {
        if (arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int min(struct array arr)
{
    int min=arr.A[0];
    int i;
    for (i=1;i<arr.length;i++)
    {
        if (arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct array arr)
{
    int s=0;
    int i;
    for (i=0;i<arr.length;i++)
        s+=arr.A[i];
        
    return s;
}

float avg(struct array arr)
{
    return (float)sum(arr)/arr.length;
}

int main()
{
    struct array arr={{2,3,4,5,6}, 20, 5};
    
    insert(&arr, 3, 15);
    append(&arr, 10);
    display(arr);
    return 0;
}
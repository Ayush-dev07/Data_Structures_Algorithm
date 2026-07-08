//Binary search method to find an element

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

int BinarySearch(struct array arr, int key)
{
    int l, h, mid;
    l=0;
    h=arr.length-1;
    
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

int main()
{
    struct array arr={{2,3,4,5,6}, 10, 5};
    
    printf("%d\n", BinarySearch(arr, 4));
    display(arr);

    return 0;
}

//Best case time complexity for successful search = O(1)
//Worst case time complexity for successful search = O(log n)
//Average time complexity for successful search = O(log n)
//Time complexity for unsuccessful search = O(log n) always
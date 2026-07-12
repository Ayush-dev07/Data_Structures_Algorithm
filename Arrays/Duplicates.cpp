//Find the duplicates in a sorted array

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void duplicate(struct array arr)
{
    int lsd, i;
    lsd=0;
    for (i=0; i<arr.length; i++)
    {
        if (arr.A[i]==arr.A[i+1] && arr.A[i] != lsd)
        {
            printf("%d\n", arr.A[i]);
            lsd=arr.A[i];
        }
    }
}

int main()
{
    struct array arr={{2,3,3,5,6,7,7,9}, 10, 7};
    
    duplicate(arr);
    return 0;
}

//Count the number of duplicates in an array

void count_duplicate(struct array arr)
{
    int i, j;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1])
        {
            j = i + 1;
            while (j < arr.length && arr.A[j] == arr.A[i])
                j++;
            printf("%d is appearing %d times.\n", arr.A[i], j - i);
            i = j - 1;
        }
    }
} 

//Time complexity = O(n)
//Same work can be done using hashtable if the array is not sorted.
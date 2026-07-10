//Finding missing element in a sorted array

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

int missing(struct array *arr)
{
    int diff, i;
    diff=arr->A[0]-0;
    for (i=0;i<arr->length;i++)
    {
        if (arr->A[i]-i != diff)
        {
            while (diff<arr->A[i]-i)
            {
                printf("Missing element found %d\n", i+diff);
                diff++;
            }
        }
    }
    return 0;
}

int main()
{
    struct array arr={{2,3,5,6,7,9}, 10, 10};
    
    missing(&arr);
    return 0;
}

//Valid for both single as well as multiple missing elements.
//Time complexity = O(n)
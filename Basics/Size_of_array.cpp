//Increase the size of an array.

#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main()
{
    int *p,*q;
    int i;
    
    p=(int *)malloc(5*sizeof(int));
    p[0]=2, p[1]=3, p[2]=9, p[3]=4, p[4]=7;
    q=(int *)malloc(10*sizeof(int));
    for (i=0;i<5;i++)
        q[i]=p[i];
    
    free(p);
    p=q;
    q=NULL;
    
    for(i=0;i<5;i++)
        printf("%d\n", p[i]);
}

//Size of an array cannot be increased conventionally.
//Size of an array cannot be changed in stack memory.
//It can only be changed in heap memory using pointers.
//We use an array of our desired size to have all the elements of previous array and point it to the previous array.

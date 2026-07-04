//Combination (nCr) solution using recursion.

//Method 01 : Using factorial
#include<stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
    return fact(n-1)*n;
    
}

int comb(int n, int r)
{
    int t1, t2, t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    return t1/(t2*t3);
}

int main()
{
    int n,r;
    printf("Enter the combination :");
    scanf("%d %d", &n, &r); 

    if (n<0 || r<0 || n<r)
    {
        printf("Combination not defined.");
        return 0;
    }

    printf("%d", comb(n,r));
    return 0;
}

// Method 02 : Using Pascal's Idenity

#include <stdio.h>

int comb(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n)
    {
        printf("Combination not defined.");
        return 0;
    }

    printf("%d", comb(n, r));
    return 0;
}
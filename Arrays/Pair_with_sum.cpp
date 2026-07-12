//Find a pair with the given sum.

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void summ(struct array arr, int k)
{
    int i,j;
    for (i=0; i<arr.length-1; i++)
    {
        for (j=i+1; j<arr.length; j++)
        {
            if (arr.A[i]+arr.A[j]==k)
                printf("%d+%d = %d\n", arr.A[i], arr.A[j], k);
        }
    }
}

int main()
{
    struct array arr={{2,3,4,5,6,7,1,8,9}, 10, 9};
    
    summ(arr,10);
    return 0;
}

//Time complexity = O(n^2)

//Method 2 : Using hashtable

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = sizeof(A) / sizeof(A[0]);
    int sum = 10;

    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        int complement = sum - A[i];
        if (hash.find(complement) != hash.end())
        {
            cout << "(" << A[i]
                 << ", "
                 << complement
                 << ")" << endl;
        }
        hash[A[i]]++;
    }
    return 0;
}

//Time complexity =O(n)
//Space complexity = O(n)


//For sorted arrays, the best method is using two pointers

#include <iostream>
using namespace std;

int main()
{
    int A[] = {2,3,5,6,7,8,9,10,14,16};
    int n = sizeof(A) / sizeof(A[0]);
    int sum = 10;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (A[i] + A[j] == sum)
        {
            cout << "(" << A[i]
                 << ", "
                 << A[j]
                 << ")" << endl;
            i++;
            j--;
        }
        else if (A[i] + A[j] < sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}

//Time complexity =O(n)
//Space complexity = O(1)
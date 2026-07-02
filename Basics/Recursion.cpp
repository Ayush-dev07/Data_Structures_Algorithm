//Sum of first n natural numbers.

#include<stdio.h>

using namespace std;

int summ(int n)
{
    if (n==0)
        return 0;
    return summ(n-1)+n;
}
int main()
{
    int a;
    a = summ(10);
    printf("%d\n", a);
}

//Loop or direct formula is better approach but this is the mathematical method.
//This is not recommende because of higher space complexity.
//Time complexity of loop and recursion is bot O(n)
//Direct formula is the best approach. sum=n(n+1)/2
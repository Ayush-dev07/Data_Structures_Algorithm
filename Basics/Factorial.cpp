//Factorial of a number using recursion.

#include<stdio.h>

using namespace std;

int fact(int n)
{
    if (n==0)
        return 1;
    return fact(n-1)*n;
    
}
int main()
{
    int a=-5;
    if (a<0)
        printf("Factorial not defined.");
        return 0;
    int factorial = fact(a);
    printf("%d\n", factorial);
}

//Loop or direct formula is better approach but this is the mathematical method.
//This is not recommende because of higher space complexity.
//Time complexity of loop and recursion is bot O(n)
//Fibonacci series terms using recursion.

#include<stdio.h>

int fib(int n)
{
    if (n<=1) return n;
    return fib(n-2)+fib(n-1);
}
int main()
{
    printf("%d", fib(10));
    return 0;
}

//Using memoization reduces the number of calls and is a good optimization technique.

//Print n terms of the fibonacci series.

#include <iostream>
using namespace std;

void printFib(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return;

    cout << a << " ";

    printFib(n - 1, b, a + b);
}

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    printFib(n);

    return 0;
}
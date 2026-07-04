//Tower of Hanoi problem using recursion

#include<stdio.h>


 void TOH(int n, int A, int B, int C)
 {
     if (n>0)
    {
        TOH(n-1, A, C, B);
        printf("(%d, %d)\n", A, C);
        TOH(n-1, B, A, C);
    }
 }
 
 int main()
 {
     TOH(5, 1, 2, 3);
     return 0;
 }

 //Time complexity is O(2^n) and space complexity is O(n).
 //Space complexity can be reduced to O(1) if we use loop.
//Time complexity cannot be reduced. This is already the optimal solution.
//Minimum number of steps that must be take is (2^n-1).
// program for factorial of n

#include <stdio.h>

int main()
{
    int n, m, factorial = 1;
    printf("enter the value of m: \n");
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        factorial = factorial * m;
    }
    printf("factorial of %d is: %d", n, factorial);
    return 0;
}
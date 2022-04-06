// write a program for factorial of n using loops(while)

#include <stdio.h>

int main()
{
    int n, m, factorial = 1;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    m = 1;
    while (m <= n)
    {
        factorial = factorial * m;
        m++;
    }
    printf("factorial of %d : %d", n, factorial);
    return 0;
}
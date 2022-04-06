// write a program for factorial of n using recurssion

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int factorial(int n);
    int fact = factorial(n);
    printf("factorial of %d : %d", n, fact);
    return 0;
}
int factorial(int n)
{
    int fact;
    if (n == 1)
        return (1);
    else
    {
        fact = n * factorial(n - 1);
        return (fact);
    }
}
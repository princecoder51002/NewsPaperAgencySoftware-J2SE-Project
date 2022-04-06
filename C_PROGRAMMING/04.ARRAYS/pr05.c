// write a program to input n elements in 2 arrays and do their sums in third array

#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("enter the value at b[%d]: \n", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("c[%d] = %d\n", i, a[i] + b[i]);
    }
    return 0;
}
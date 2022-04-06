// write a program for greatest element in array using pointers to array

#include <stdio.h>

int main()
{
    int n, i, *p, max;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    p = &a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < *(p + i))
            max = *(p + i);
    }
    printf("greatest element : %d", max);
    return 0;
}
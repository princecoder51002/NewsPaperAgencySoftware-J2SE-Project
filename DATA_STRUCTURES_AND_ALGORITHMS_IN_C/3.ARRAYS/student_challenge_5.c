// write a program to find duplicates and count number of duplicates in sorted array with alternative method

#include <stdio.h>

int main()
{
    int i, n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    int h[max + 1];
    for (i = 0; i < max + 1; i++)
        h[i] = 0;
    for (i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    for (i = 1; i <= max; i++)
    {
        if (h[i] > 1)
        {
            printf("duplicated element: %d\n", i);
            printf("%d appearing %d times\n", i, h[i]);
        }
    }
    return 0;
}
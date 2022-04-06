// write a program for sorting of an array (bubble sorting)

#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nsorted array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
// write a program to input elements in 2 arrays(sets) and find common elements(intersection)

#include <stdio.h>

int main()
{
    int n, i, j, count = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n], b[n];
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
    for (j = 0; j < n; j++)
    {
        b[j];
        for (i = 0; i < n; i++)
        {
            a[i];
            if (a[i] == b[j])
            {
                printf("common element: %d\n", a[i]);
                count++;
            }
        }
    }
    printf("total common elements: %d\n", count);

    return 0;
}
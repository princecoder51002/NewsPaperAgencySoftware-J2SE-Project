// write a program for searching of an element using pointers to array

#include <stdio.h>

int main()
{
    int n, i, *p, wanted;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    p = &a[0];
    printf("enter element want to search: \n");
    scanf("%d", &wanted);
    for (i = 0; i < n; i++)
    {
        if (wanted == *(p + i))
        {
            printf("searching element : %d\n", *(p + i));
            printf("searched at location: %d\n", i);
        }
    }

    return 0;
}
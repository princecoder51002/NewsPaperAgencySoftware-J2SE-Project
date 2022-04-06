// write a basic program for pointers to array

#include <stdio.h>

int main()
{
    int n, i, *p;
    printf("enter value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    p = &a[0];
    printf("\n output\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
        printf("%d\n", *(p + i));
        printf("%d\n", *(i + p));
        printf("%d\n", *p++);
        printf("%d\n", *(a + i));
        printf("%d\n", *(i + a));
        printf("%d\n", i[a]);
        printf("%d\n", a[i]);
    }
    return 0;
}
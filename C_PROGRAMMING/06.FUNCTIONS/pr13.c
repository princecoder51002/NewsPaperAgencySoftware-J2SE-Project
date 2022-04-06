// program for searching an element by passing array as arguement

#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    void searched(int *p, int n);
    searched(&a[0], n);
    return 0;
}
void searched(int *p, int n)
{
    int i, wanted;
    printf("enter the element want to search: \n");
    scanf("%d", &wanted);
    for (i = 0; i < n; i++)
    {
        if (wanted == *(p + i))
            printf("element found at %d location\n", i);
    }
}
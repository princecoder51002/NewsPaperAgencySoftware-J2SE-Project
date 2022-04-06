// write a program for greatest of element by passing array as arguement

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
    int greatest(int *p, int n);
    int max = greatest(&a[0], n);
    printf("greatest element = %d", max);
    return 0;
}
int greatest(int *p, int n)
{
    int i, max = *p;
    for (i = 0; i < n; i++)
    {
        if (max < *(p + i))
            max = *(p + i);
        
    }
    return (max);
}
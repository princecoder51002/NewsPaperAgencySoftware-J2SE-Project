// write a program for sum of two arrays using passing both arrays as arguements

#include <stdio.h>

int main()
{
    int n, i;
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
    void add(int *p, int *q, int n);
    add(&a[0], &b[0], n);
    return 0;
}
void add(int *p, int *q, int n)
{
    int c, i;
    for (i = 0; i < n; i++)
    {
        printf("c[%d] = %d\n", i, *(p + i) + *(q + i));
    }
}
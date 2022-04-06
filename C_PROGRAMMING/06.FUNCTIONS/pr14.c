// write a program for sorting by passing array as arguement

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
    void sorted(int *p, int n);
    sorted(&a[0], n);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
void sorted(int *p, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
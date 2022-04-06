// write a program for sum of two matrices of mxn order

#include <stdio.h>

int main()
{
    int m, n, r, c;
    printf("enter the value of m and n: \n");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n];
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("enter the value at a[%d][%d]: \n", r, c);
            scanf("%d", &a[r][c]);
        }
    }
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("enter the value at b[%d][%d]: \n", r, c);
            scanf("%d", &b[r][c]);
        }
    }
    int p[m][n];
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            p[r][c] = a[r][c] + b[r][c];
            printf("%d ", p[r][c]);
        }
        printf("\n");
    }
    return 0;
}